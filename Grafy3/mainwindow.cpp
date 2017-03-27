#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "engine.h"
#include "consistentgraphgenerator.h"
#include "minimumspanningtree.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->newGraphProvider,SIGNAL(changed(int)),Engine::getInstance(),SLOT(changeGraphSize(int)));
    connect(Engine::getInstance(),SIGNAL(changedGraph(QObject*)),ui->graphPainter,SLOT(update(QObject*)));
    connect(Engine::getInstance(),SIGNAL(changedGraph(QObject*)),ui->matrixWidget,SLOT(update(QObject*)));
    connect(ui->matrixWidget,SIGNAL(changed(QObject*)),Engine::getInstance(),SLOT(updateGraph(QObject*)));
    connect(Engine::getInstance(),SIGNAL(changedGraph(QObject*)),ui->dijkstraView,SLOT(update(QObject *)));
    connect(Engine::getInstance(),SIGNAL(changedGraph(QObject*)),ui->distanceMatrix,SLOT(update(QObject*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_consistentGraphGeneratorTrigget_clicked()
{
    int vertexNumber=ui->consistentVertexCount->value();
    Graph * newGraph=ConsistentGraphGenerator::randomConsistentGraph(vertexNumber);

    Engine::getInstance()->setGraph(newGraph);
}

void MainWindow::on_MSTTrigger_clicked()
{
    Graph * dataPointer;
    dataPointer=Engine::getInstance()->getGraph();

    if(Consistent::getMaxConsistent(dataPointer->getAdjacencyMatrix(),dataPointer->getVerticesNumber()).size()
                ==dataPointer->getVerticesNumber()){

        std::vector<int> path;
        bool ** matrix=MinimumSpanningTree::getMST(Engine::getInstance()->getGraph());
        for(int index=0;index<Engine::getInstance()->getGraph()->getVerticesNumber();index++){
            for(int index2=index;index2<Engine::getInstance()->getGraph()->getVerticesNumber();index2++){
                if(matrix[index][index2]){
                    path.push_back(index);
                    path.push_back(index2);
                }
            }
        }
        Engine::getInstance()->setPath(path);
        for(int index=0;index<Engine::getInstance()->getGraph()->getVerticesNumber();index++){
            delete [] matrix[index];
        }
        delete [] matrix;
    }
}

void MainWindow::on_removeTrigget_clicked()
{
    std::vector <int> empty;
    Engine::getInstance()->setPath(empty);
}
