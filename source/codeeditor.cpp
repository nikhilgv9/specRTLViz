#include "codeeditor.h"
#include "linenumberarea.h"
#include "highlighter.h"

CodeEditor::CodeEditor(QWidget *parent)
    : QPlainTextEdit(parent)
 {
     lineNumberArea = new LineNumberArea((CodeEditor*)this);

     connect(this, SIGNAL(blockCountChanged(int)), this, SLOT(updateLineNumberAreaWidth(int)));
     connect(this, SIGNAL(updateRequest(QRect,int)), this, SLOT(updateLineNumberArea(QRect,int)));
     connect(this, SIGNAL(cursorPositionChanged()), this, SLOT(highlightCurrentLine()));

     updateLineNumberAreaWidth(0);
     highlightCurrentLine();
 }

int CodeEditor::lineNumberAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount());
    while (max >= 10) {
        max /= 10;
        ++digits;
    }

    int space = 3 + fontMetrics().width(QLatin1Char('9')) * digits;

    return space;
}

void CodeEditor::findText(QString text, int dir){
    QTextCursor cursor = textCursor();
    if(dir==0 || dir==-1){
        cursor.movePosition(cursor.PreviousWord);
    }
    QTextDocument* d = document();
    QTextCursor p;
    if(dir==-1){
        p = d->find(text,cursor,d->FindBackward);
    }
    else{
        p = d->find(text,cursor);
    }
    qDebug() << text << "Found...";
    qDebug() << p.blockNumber();
    if(!p.isNull()){
        setTextCursor(p);
    }
}

void CodeEditor::updateLineNumberAreaWidth(int a)
{
    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}

void CodeEditor::updateLineNumberArea(const QRect &rect, int dy)
{
    if (dy) {
        lineNumberArea->scroll(0, dy);
    } else if (m_countCache.first != blockCount()
            || m_countCache.second != textCursor().block().lineCount()) {
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());
        m_countCache.first = blockCount();
        m_countCache.second = textCursor().block().lineCount();
    }

    if (rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}

void CodeEditor::resizeEvent(QResizeEvent *e)
{
    QPlainTextEdit::resizeEvent(e);

    QRect cr = contentsRect();
   lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
}


void CodeEditor::highlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> extraSelections;
    QTextCursor cursor = textCursor();
    if (!isReadOnly()) {
        QTextEdit::ExtraSelection selection;

        QColor lineColor = QColor(Qt::yellow).lighter(160);

        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = cursor;
        selection.cursor.clearSelection();
        extraSelections.append(selection);
    }

    setExtraSelections(extraSelections);
    matchParentheses(cursor);
}

void CodeEditor::lineNumberAreaPaintEvent(QPaintEvent *event)
 {
    QPainter painter(lineNumberArea);
    painter.fillRect(event->rect(), Qt::lightGray);
    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = (int) blockBoundingGeometry(block).translated(contentOffset()).top();
    int bottom = top + (int) blockBoundingRect(block).height();
    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
             QString number = QString::number(blockNumber + 1);
             painter.setPen(Qt::black);
             painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                              Qt::AlignRight, number);
        }
        block = block.next();
        top = bottom;
        bottom = top + (int) blockBoundingRect(block).height();
        ++blockNumber;
    }

}

// walk through and check that we don't exceed 80 chars per line
void CodeEditor::matchParentheses(QTextCursor& cursor)
{
    bool match = false;
    QTextBlock block = cursor.block();
    QTextBlockUserData* d=block.userData();
    TextBlockData *data = static_cast<TextBlockData *>(block.userData());

    if (data) {
        QVector<ParenthesisInfo *> infos = data->parentheses();

        int pos = textCursor().block().position();
        for (int i = 0; i < infos.size(); ++i) {
            ParenthesisInfo *info = infos.at(i);

            int curPos = textCursor().position() - textCursor().block().position();
            if (info->position == curPos - 1 && info->character == '(') {
                if (matchLeftParenthesis(textCursor().block(), i + 1, 0))
                    createParenthesisSelection(pos + info->position);
            } else if (info->position == curPos - 1 && info->character == ')') {
                if (matchRightParenthesis(textCursor().block(), i - 1, 0))
                    createParenthesisSelection(pos + info->position);
            }
        }
    }
}

bool CodeEditor::matchLeftParenthesis(QTextBlock currentBlock, int i, int numLeftParentheses)
{
    TextBlockData *data = static_cast<TextBlockData *>(currentBlock.userData());
    QVector<ParenthesisInfo *> infos = data->parentheses();

    int docPos = currentBlock.position();
    for (; i < infos.size(); ++i) {
        ParenthesisInfo *info = infos.at(i);

        if (info->character == '(') {
            ++numLeftParentheses;
            continue;
        }

        if (info->character == ')' && numLeftParentheses == 0) {
            createParenthesisSelection(docPos + info->position);
            return true;
        } else
            --numLeftParentheses;
    }

    currentBlock = currentBlock.next();
    if (currentBlock.isValid())
        return matchLeftParenthesis(currentBlock, 0, numLeftParentheses);

    return false;
}

bool CodeEditor::matchRightParenthesis(QTextBlock currentBlock, int i, int numRightParentheses)
{
    TextBlockData *data = static_cast<TextBlockData *>(currentBlock.userData());
    QVector<ParenthesisInfo *> parentheses = data->parentheses();

    int docPos = currentBlock.position();
    for (; i > -1 && parentheses.size() > 0; --i) {
        ParenthesisInfo *info = parentheses.at(i);
        if (info->character == ')') {
            ++numRightParentheses;
            continue;
        }
        if (info->character == '(' && numRightParentheses == 0) {
            createParenthesisSelection(docPos + info->position);
            return true;
        } else
            --numRightParentheses;
    }

    currentBlock = currentBlock.previous();
    if (currentBlock.isValid())
        return matchRightParenthesis(currentBlock, 0, numRightParentheses);

    return false;
}

void CodeEditor::createParenthesisSelection(int pos)
{
    QList<QTextEdit::ExtraSelection> selections = extraSelections();

    QTextEdit::ExtraSelection selection;
    QTextCharFormat format = selection.format;
    format.setBackground(Qt::green);
    selection.format = format;

    QTextCursor cursor = textCursor();
    cursor.setPosition(pos);
    cursor.movePosition(QTextCursor::NextCharacter, QTextCursor::KeepAnchor);
    selection.cursor = cursor;

    selections.append(selection);

    setExtraSelections(selections);
}

