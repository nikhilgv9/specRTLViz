#include "treeview.h"


TreeView:: TreeView(QWidget *parent = 0):
    QGraphicsView(parent)
{
    qDebug()<< "Invoked...";
}

TreeView:: TreeView(QGraphicsScene *scene, QWidget *parent = 0):
    QGraphicsView(scene, parent)
{
}
