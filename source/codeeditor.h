#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QPainter>
#include <QPlainTextEdit>
#include <QTextBlock>
#include <QDebug>
#include <QObject>
#include <QPair>
#include<QTextCursor>

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT
public:
    explicit CodeEditor(QWidget *parent = 0);
    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();
    void findText(QString text, int dir=0);

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void updateLineNumberAreaWidth(int);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &, int);
    void matchParentheses(QTextCursor &cursor);
private:
   QWidget *lineNumberArea;
   QPair<int,int> m_countCache=QPair<int,int>(-1,-1);
   bool matchLeftParenthesis(QTextBlock currentBlock, int index, int numRightParentheses);
   bool matchRightParenthesis(QTextBlock currentBlock, int index, int numLeftParentheses);
   void createParenthesisSelection(int pos);
};

#endif // CODEEDITOR_H
