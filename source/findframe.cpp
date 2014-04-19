#include "findframe.h"

FindFrame::FindFrame(QWidget *parent, int w) :
    QFrame(parent)
{
    setGeometry(w-225,0,200,30);
    parentEditor = (CodeEditor*)this->parent();
    ed = new QLineEdit(this);
    prev=new QPushButton("<",this);
    next=new QPushButton(">",this);
    ed->setGeometry(0,0,150,30);
    prev->setGeometry(150,0,25,30);
    next->setGeometry(175,0,25,30);
    connect(next, SIGNAL(clicked()), this, SLOT(findNext()));
    connect(prev, SIGNAL(clicked()), this, SLOT(findPrev()));
}

void FindFrame::findNext(){
    parentEditor->findText(this->ed->text(),1);
}

void FindFrame::findPrev(){
    parentEditor->findText(this->ed->text(),-1);
}

void FindFrame::keyPressEvent(QKeyEvent *event){
    switch (event->key()) {
         case Qt::Key_Escape:
            this->hide();
            parentEditor->setFocus();
            break;
         default:
            parentEditor->findText(this->ed->text());
    }
}
