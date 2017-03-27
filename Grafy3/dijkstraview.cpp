#include "dijkstraview.h"
#include "ui_dijkstraview.h"
#include "engine.h"
#include "dijkstra.h"

DijkstraView::DijkstraView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DijkstraView)
{
    ui->setupUi(this);
}

DijkstraView::~DijkstraView()
{
    delete ui;
}

void DijkstraView::on_generateTrigger_clicked()
{
    QString result;

    Graph * dataPointer;
    dataPointer=Engine::getInstance()->getGraph();

    if(Consistent::getMaxConsistent(dataPointer->getAdjacencyMatrix(),dataPointer->getVerticesNumber()).size()
                ==dataPointer->getVerticesNumber()){

        int point = ui->djPointNumber->value();
        std::vector<std::vector<int> > paths=Dijkstra::individualDijkstra(Engine::getInstance()->getGraph(),point);

        for(int index=0;index<paths.size();index++){
            result=result+"cel: "+ QString::number(index+1) + " droga: " ;
            int len=0;
            for(int index2=0;index2<paths[index].size();index2++){
                result=result+QString::number(paths[index][index2]);
                if((index2+1)<paths[index].size()){
                    result+=" => ";
                }
                else{
                    result+="   ";
                }
                if((index2+1)<paths[index].size()){
                    len+=Engine::getInstance()->getGraph()->getWeight(paths[index][index2]-1,paths[index][index2+1]-1);
                }
            }
            result=result+"dl: "+QString::number(len)+"<br>" ;
        }
    }
    else{
        result="Graf nie jest spójny !!!";
    }
    ui->djResultLabel->setText(result);
}

void DijkstraView::update(QObject *){
    ui->djPointNumber->setRange(1,Engine::getInstance()->getGraph()->getVerticesNumber());
}
