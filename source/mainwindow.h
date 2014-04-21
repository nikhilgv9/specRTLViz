#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <cmath>
#include <QPainter>
#include <QMessageBox>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <QRectF>
#include <QPainterPath>
#include <QtDebug>
#include "node.hh"
#include "graphicsviewzoom.h"
#include <ui_mainwindow.h>
#include <QPointF>
#include <QFont>
#include<QFileDialog>
#include "srtl-driver.hh"
#include "node2.h"
#include "textellipse.h"
#include "codeeditor.h"
#include "highlighter.h"
#include "findframe.h"
#include "QLabel"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Node2* root2;
    QColor red;
    QColor black;
    std::string openedFile;
    FindFrame* findFrame;


public:

    void setRoot2(Node2*);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *getUi();

public slots:
    void newClick();
    void openClick();
    void saveClick();
    void showFind();
    void floatingChanged(bool floating);

private slots:
    void on_generateButton_clicked();

    void on_radioOut_clicked();

    void on_radioIn_clicked();

    void on_showNil_clicked();

private:
    Ui::MainWindow *ui;
    Highlighter *highlighter;

    void paintEvent(QPaintEvent *);
    void dfs(Node2*, QGraphicsScene*, int, int, int);
};

#endif // MAINWINDOW_H
