#ifndef DOCKABLEAREA_H
#define DOCKABLEAREA_H

#include <QDockWidget>
#include "node.hh"
#include "textellipse.h"
#include "graphicsviewzoom.h"

class MainWindow;

class DockableArea : public QDockWidget
{
    Q_OBJECT
    Node* root;
    Node* rootin;
    Node* rootout;
    int circleWidth;

public:
    MainWindow* mainWin;
    QGraphicsView* graphicsView;
    unsigned int currLeaf;
    int levelsX[10];
    std::vector<Operand> operandsIn;
    std::vector<ModeStmt> modeStmtsIn;
    std::vector<Operand> operands;
    std::vector<Operand> operandsOut; /* This is only required for peep2, splits & insn_split */
    std::vector<ModeStmt> modeStmtsOut;
    void setRoot(Node*);
    void setRootIn(Node*);
    void setRootOut(Node*);


    void resetLevelsX();
    explicit DockableArea(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    std::string getType(enum Operand::Type t);
    TextEllipse *dfs(Node*, QGraphicsScene*, int, int, int depth=0, QString id="root", bool consume=true);
signals:
    
public slots:
    
};

#endif // DOCKABLEAREA_H
