#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QGraphicsView>
#include <QtDebug>

class TreeView : public QGraphicsView
{
    Q_OBJECT
public:
    TreeView(QWidget*);
    TreeView(QGraphicsScene*, QWidget*);
    
protected:

signals:
    
public slots:
    
};

#endif // TREEVIEW_H
