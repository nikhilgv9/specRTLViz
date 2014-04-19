#include "dockablearea.h"
#include "mainwindow.h"

DockableArea::DockableArea(QWidget *parent) :
    QDockWidget(parent)
{
}

void DockableArea::setRoot(Node* r){
    this->root=r;
}

void DockableArea::setRootIn(Node* r){
    this->rootin=r;
}

void DockableArea::setRootOut(Node* r){
    this->rootout=r;
}

void DockableArea::resetLevelsX(){
    for(int i=0;i<10;i++){
        this->levelsX[i] = -200;
    }
}

void DockableArea::paintEvent(QPaintEvent *event){
    QDockWidget::paintEvent(event);

    QGraphicsScene* scene=new QGraphicsScene(graphicsView);
    graphicsView->setScene(scene);
    GraphicsViewZoom* z = new GraphicsViewZoom(graphicsView);
    z->set_modifiers(Qt::NoModifier);

    if(mainWin->getUi()->radioIn->isChecked()){
        this->operands = this->operandsIn;
        this->root = rootin;
    }
    else{
        this->operands = this->operandsOut;
        this->root = rootout;
    }

    if(this->root!=NULL){
        //dfs(this->root,painter,600,100,0);
        currLeaf = 0;
        this->resetLevelsX();
        dfs(this->root,scene,-200,0,0);
    }
}


//This is new DFS
TextEllipse* DockableArea::dfs(Node* node, QGraphicsScene* scene, int x, int y, int depth, QString id, bool consume){
    int height = 30;
    Operand op;
    bool nextConsume = true;
    string name = node->getName();
    string fullText = name;
    if(operands.size()>currLeaf){
        op = this->operands[currLeaf];
    }

    if(node->isLeafNode()){
        name = "";
        fullText = "";
    }

    if(node->isLeafNode() && consume){

            while(operands.size()>currLeaf && (op.getType() == Operand::bracketOpen))
            {
                currLeaf++;
                op = this->operands[currLeaf];
            }

            if(op.getType() != Operand::bracketClose && operands.size()>currLeaf){
                currLeaf++;

                fullText = getType(op.getType())+":"+op.getPredicate();
                if(op.getMode()!=""){
                    fullText+=":"+op.getMode();
                }
                if(op.getConstraint()!=""){
                    fullText+=":"+op.getConstraint();
                }
                else{
                    fullText+=srtl_driver::itos(op.getNumber());
                }

                fullText=srtl_driver::itos(op.getOperandNumber())+"="+fullText;

                name = op.getPredicate();

                if(name==""){
                    name=getType(op.getType())+":";
                    name+=srtl_driver::itos(op.getNumber());
                }

                if(op.getMode()!=""){
                    name+=":"+op.getMode();
                }
                if(name=="" && op.getConstraint()!=""){
                    name=op.getConstraint();
                }
                else if(op.getConstraint()!=""){
                    string s = op.getConstraint();
                    int len = s.size();
                    if(len>3){
                        name+=":"+s.substr(0,3)+"..";
                    }
                    else{
                        name+=":"+s;
                    }
                }

                if(operands.size()>currLeaf){
                    op = this->operands[currLeaf];
                    if(op.getType() == Operand::bracketClose){
                        nextConsume = false;
                    }
                }
            }
    }
    if(name==""){
        name = "<<NIL>>";
        if(!mainWin->getUi()->showNil->isChecked()){
            return NULL;
        }
    }
    int nChildren = node->getChildren().size();
    int nRealChildren = 0;
    Node* child = NULL;
    for(int i=0; i<nChildren; i++){
        child = (node->getChildren())[i];
        if(child->getName() != "___")
            nRealChildren++;
    }
    int leftX=x;
    int rightX=x;
    int currX=x;
    bool curConsume = consume;
    bool collaspsing = false;
    TextEllipse* children[100];
    if(TextEllipse::collapsedList.contains(id)){
        nRealChildren = 0;
        collaspsing = true;
    }

    for(int i=0; i<nRealChildren; i++){
        child = (node->getChildren())[i];
        if(child->getName() == "___"){
            nRealChildren++;
            continue;
        }
        QString newid = id+"."+QString::number(i+1);
        TextEllipse* c = dfs(child,scene,currX,y+100,depth+1,newid,curConsume);
        children[i]=c;
        if(c!=NULL){
            if(i==0){
                leftX=c->x;
            }
            currX=c->x + c->totalWidth/2+30;
            rightX=c->x;
            this->levelsX[depth+1] = c->x + c->width/2+30;
            if(this->levelsX[depth+2] < this->levelsX[depth+1]/2)
                this->levelsX[depth+2] = this->levelsX[depth+1]/2;
            curConsume = curConsume & c->nextConsume;
        }
    }
    int width = rightX - leftX;
    int midX = (rightX + leftX)/2;
    TextEllipse *circle;
    if(this->levelsX[depth]>midX){
        midX = this->levelsX[depth];
        circle = new TextEllipse(midX,y, name, fullText, true,collaspsing);
    }
    else{
        circle = new TextEllipse(midX,y, name, fullText, false,collaspsing);
    }
    if(width>circle->totalWidth)
    {
        circle->totalWidth = width;
    }
    else if(width==0){
        delete circle;
        circle = new TextEllipse(this->levelsX[depth],y, name,fullText, true,collaspsing);
    }
    circle->parentView=this;
    circle->id=id;
    scene->addItem(circle);


    // Drawing lines to children
    for(int i=0; i<nRealChildren; i++){
        if(child->getName() == "___"){
            continue;
        }
        if(children[i]!=NULL){
            QGraphicsLineItem *line= new QGraphicsLineItem(circle->x,y+height,children[i]->x,y+100);
            scene->addItem(line);
        }
    }
    if(operands.size()>currLeaf){
        op = this->operands[currLeaf];
    }
    if(!node->isLeafNode() && op.getType() == Operand::bracketClose){
        if (name == "match_operator" || name == "unspec" ||
                name == "parallel" || name == "unspec_volatile" ||
                name == "match_op_dup" || name == "sequence"){
            currLeaf++;
        }
    }
    circle->nextConsume = nextConsume;
    return circle;
}

string DockableArea::getType(enum Operand::Type t){
    string s;
    if(t==Operand::pmc){
        s="pcm";
    }
    else if(t==Operand::dup){
        s="dup";
    }
    else if(t==Operand::num){
        s="num";
    }
    else if(t==Operand::reg){
        s="reg";
    }
    else if(t==Operand::regNum){
        s="regNum";
    }
    else if(t==Operand::extraReg){
        s="extraReg";
    }
    else if(t==Operand::constSpec){
        s="constSpec";
    }
    else if(t==Operand::scratch){
        s="scratch";
    }
    else if(t==Operand::eqAttr){
        s="eqAttr";
    }
    else if(t==Operand::matchOperator){
        s="matchOperator";
    }
    else if(t==Operand::fixedReg){
        s="fixedReg";
    }
    else if(t==Operand::integer){
        s="integer";
    }
    else if(t==Operand::string){
        s="string";
    }
    else{
        s="";
    }
    return s;
}
