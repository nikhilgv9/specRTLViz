#include "textellipse.h"

using namespace std;

QColor TextEllipse::red=QColor(255,0,0);
QColor TextEllipse::yellow=QColor(255,255,0);
QColor TextEllipse::blue=QColor(0,0,255);
QColor TextEllipse::black=QColor(0,0,0);
QColor TextEllipse::white=QColor(255,255,255);
QColor TextEllipse::green=QColor(0,200,100);
QSet<QString> TextEllipse::collapsedList=QSet<QString>();

TextEllipse::TextEllipse(int x, int y, std::string text, std::string fullText, bool leftX, bool collapsed, QGraphicsItem *parent, QGraphicsScene *scene):
QGraphicsItem(parent,scene)
{

    int size = text.size();
    int xpad = 10+size/5;
    int ypad = 5;
    this->x=x;
    this->y=y;
    this->isCollapsed = collapsed;
    QFontMetrics metrics = QFontMetrics(TextEllipse::font);
    QString qText(text.c_str());
    int textWidth=metrics.width(qText);
    this->width=textWidth+2*xpad;
    this->totalWidth=this->width;
    if(leftX)
        this->x=x+width/2;
    this->rect = QRectF(this->x-width/2,y,width,30);
    this->textRect = QRectF(this->x-textWidth/2,y+ypad,textWidth,30);
    this->text = QString(text.c_str());
    this->setAcceptHoverEvents(true);
    this->setToolTip(QString(fullText.c_str()));
}

QRectF TextEllipse::boundingRect() const
{
    return rect;
}

void TextEllipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget)
{
    painter->setPen(blue);
    QBrush brush = painter->brush();
    brush.setStyle(Qt::SolidPattern);
    if(this->text=="<<NIL>>"){
        brush.setColor(red);
    }
    else if(!isCollapsed){
        brush.setColor(blue);
    }
    else{
        QPen p;
        p.setColor(red);
        p.setWidth(2);
        painter->setPen(p);
        brush.setColor(blue);
    }
    painter->setBrush(brush);
    painter->drawEllipse(this->rect);
    painter->setPen(white);
//    if(isCollapsed){
//        QPen pen;
//        pen.color(white);
//        pen.setStyle();
//        painter->setPen();
//    }
    painter->setFont(font);
    painter->drawText(this->textRect,this->text);
    painter->setPen(black);
    brush.setColor(white);
}

void TextEllipse::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if(this->isCollapsed){
        collapsedList.remove(this->id);
        qDebug()<<"Expanding:"<<this->id;
    }
    else{
        collapsedList.insert(this->id);
        qDebug()<<"Collapsing:"<<this->id;
    }
    parentView->update();
}

void TextEllipse::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    qDebug()<<"Entered:"<<this->id;
    setCursor(Qt::PointingHandCursor);
}
