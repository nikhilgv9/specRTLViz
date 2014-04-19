#ifndef TEXTELLIPSE_H
#define TEXTELLIPSE_H

#include <QGraphicsView>
#include <QPainter>
#include <QRectF>
#include <QColor>
#include <QFont>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QFontMetrics>
#include <QGraphicsWidget>

class TextEllipse : public QGraphicsItem
{
    QString text;
    QRectF rect;
    QRectF textRect;

public:
    QWidget* parentView;
    static QSet<QString> collapsedList;
    QFont font;
    QString id;
    bool isCollapsed;
    static QColor red;
    static QColor black;
    static QColor yellow;
    static QColor blue;
    static QColor white;
    static QColor green;
    int x;
    int y;
    int width;
    int totalWidth;
    bool nextConsume = true;
    TextEllipse(int x, int y, std::string, std::string , bool leftx, bool collapsed, QGraphicsItem* p=0, QGraphicsScene* q=0);
    QRectF boundingRect() const;
    void paint(QPainter*, const QStyleOptionGraphicsItem*,QWidget*);
    void mousePressEvent(QGraphicsSceneMouseEvent *);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *);
};

#endif // TEXTELLIPSE_H
