#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textellipse.h"
#include<pthread.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->red=QColor(255,0,0);
    this->black=QColor(0,0,0);
    highlighter = new Highlighter(this->ui->textEdit->document());
    int w = ui->textEdit->maximumSize().width();
    findFrame = new FindFrame(ui->textEdit, w);
    findFrame->hide();
    QAction *find = new QAction(this);
    find->setShortcut(Qt::Key_F | Qt::CTRL);
    connect(find, SIGNAL(triggered()), this, SLOT(showFind()));
    this->addAction(find);
    connect(this->ui->dock, SIGNAL(topLevelChanged(bool)), this, SLOT(floatingChanged(bool)));
    this->ui->dock->graphicsView = this->ui->graphicsView;
    this->ui->dock->mainWin = this;
}

void MainWindow::floatingChanged(bool floating)
{
    if( floating )
    {
        QDockWidget* dw = static_cast<QDockWidget*>(QObject::sender());
        dw->setWindowFlags( Qt::Window );
        dw->setStyleSheet(
        QString("QDockWidget{ border: 0px; background-color: #050505; margin: 0px; padding: 0px; color:white;}") +
        QString("QDockWidget::title{ text-align: center; background-color: black; padding: 0px; margin: 0px; color:white; }"));
        //this->ui->graphicsView->setMaximumSize(1320,1000);
        dw->showFullScreen();
    }
    else{
//        this->ui->graphicsView->setMaximumSize(820,1000);
//        this->ui->graphicsView->setGeometry(0,0,820,1000);
    }
}

MainWindow::~MainWindow(){
    delete ui;
}

Ui::MainWindow* MainWindow::getUi(){
    return this->ui;
}

void MainWindow::setRoot2(Node2* r){
    this->root2=r;
}

void MainWindow::showFind()
{
    int w = this->ui->textEdit->width();
    this->findFrame->setGeometry(w-225,0,200,30);
    this->findFrame->show();
    this->findFrame->ed->setFocus();
}



void MainWindow::openClick()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"/home/nikhil/gcc/assign4/SRTL-2.0/sample_md_files",tr("specRTL Files (*.specmd)"));
    if(fileNames.count()>0){
        string fileName = fileNames[0].toStdString();
        this->openedFile = fileName;
        qDebug() << fileName.c_str();
        //ConcretePattern* p = (ConcretePattern*)srtl_invoke(fileName);

        QFile file(QString(this->openedFile.c_str()));
        if(!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);

        this->ui->textEdit->clear();
        while(!in.atEnd()) {
            QString line = in.readLine();
            this->ui->textEdit->appendPlainText(line);
        }

        file.close();

    }
}

void MainWindow::paintEvent(QPaintEvent *)
{

}

// Old DFS
void MainWindow::dfs(Node2* node, QGraphicsScene* scene, int x, int y, int depth=0){
    int widen=10+(4-depth)*50;
    int step = (10+(4-depth)*50)*2;
    int pos = -widen;
    int height = 30;
    string name =node->value;
    TextEllipse *circle = new TextEllipse(x,y, name, name, false, false);
    scene->addItem(circle);

    if(node->left==NULL || node->right==NULL)
        pos=0;
    if(node->left!=NULL)
    {
        QGraphicsLineItem *line= new QGraphicsLineItem(x,y+height,x+pos,y+100);
        scene->addItem(line);
        dfs(node->left,scene,x+pos,y+100,depth+1);
    }
    pos+=step;
    if(node->right!=NULL)
    {
        QGraphicsLineItem *line= new QGraphicsLineItem(x,y+height,x+pos,y+100);
        scene->addItem(line);
        dfs(node->right,scene,x+pos,y+100,depth+1);
    }
}



void MainWindow::on_generateButton_clicked()
{
    QString text = this->ui->textEdit->toPlainText();
    if(text != ""){
        //Temporarily writing contents in the text box to file
        this->ui->messageText->append("Parsing specRTL...........");
        QString fileName("temp.specmd");
        QFile fp(fileName);
        fp.open(QIODevice::WriteOnly | QIODevice::Text);
        fp.write(text.toStdString().c_str());
        fp.close();

        //Getting current cursor position
        QTextCursor cursor = this->ui->textEdit->textCursor();
        QTextDocument* d = this->ui->textEdit->document();
        QTextCursor p = d->find(QRegExp("concrete"),cursor,d->FindBackward);
        if(p.isNull()){
            this->ui->messageText->append("No concrete pattern found...........");
            return;
        }
        QString lineText = p.block().text();
        // Line number is 1 less than the line number is editor
        int lineNo = p.blockNumber();
        qDebug() << lineNo;
        fileName+="|"+QString::number(lineNo);
        //Creating PThread
        pthread_t thread;
        int rc = pthread_create(&thread, NULL,Execute, (void *)fileName.toStdString().c_str());
        if (rc){
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
        srtl_driver *driver;
        pthread_join(thread, (void**)&driver);
        if(driver->currentPattern!=NULL && driver->result==0){
            if(lineNo!=0){;
                this->ui->dock->setWindowTitle(lineText);
            }
            ConcretePattern* p = dynamic_cast<ConcretePattern*>(driver->currentPattern);
            if(p != 0) {
                this->ui->dock->setRootIn(p->getTree());
                this->ui->dock->setRootOut(p->getTreeOut());
                this->ui->dock->operandsIn = p->getOperands();
                this->ui->dock->operandsOut = p->getOperandsOut();
                this->ui->messageText->append("Done!!!");
            }
            else{
//                AbstPattern* q = dynamic_cast<AbstPattern*>(driver->currentPattern);
//                if(q!=NULL){
//                    this->setRootIn();
//                    this->setRootOut(NULL);
//                    this->operandsIn.clear();
//                    this->operandsOut.clear();
//                }
//                else{
                    this->ui->dock->setRootIn(NULL);
                    this->ui->dock->setRootOut(NULL);
                    this->ui->dock->operandsIn.clear();
                    this->ui->dock->operandsOut.clear();
                    this->ui->messageText->append("No concrete pattern found...........");
                }
//            }
        }
        else{
            this->ui->messageText->append(driver->messages);
        }
        delete driver;
    }
    else{
        this->ui->messageText->append("Empty file...........");
    }
    this->ui->graphicsView->update();
}


void MainWindow::on_radioOut_clicked()
{
    this->ui->graphicsView->update();
}

void MainWindow::on_radioIn_clicked()
{
    this->ui->graphicsView->update();
}

void MainWindow::on_showNil_clicked()
{
    this->ui->graphicsView->update();
}
