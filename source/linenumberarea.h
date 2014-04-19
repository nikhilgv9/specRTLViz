#include "codeeditor.h"
#ifndef LINENUMBERAREA_H
#define LINENUMBERAREA_H
#include <QSize>
#include <QWidget>

class LineNumberArea : public QWidget
{
private:
    CodeEditor *codeEditor;
public:
    LineNumberArea(CodeEditor *);
    QSize sizeHint() const;

protected:
    void paintEvent(QPaintEvent*);
};

#endif // LINENUMBERAREA_H
