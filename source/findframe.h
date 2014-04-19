#ifndef FINDFRAME_H
#define FINDFRAME_H

#include <QFrame>
#include<QPushButton>
#include<QLineEdit>
#include<QAction>
#include<QKeyEvent>
#include "codeeditor.h"
#include<QDebug>

class FindFrame : public QFrame
{
    Q_OBJECT
    CodeEditor* parentEditor;
public:
    explicit FindFrame(QWidget *parent = 0, int w=500);
    void keyPressEvent(QKeyEvent *);
    QLineEdit* ed;
    QPushButton* prev;
    QPushButton* next;
    
signals:
    
public slots:
    void findNext();
    void findPrev();
    
};

#endif // FINDFRAME_H
