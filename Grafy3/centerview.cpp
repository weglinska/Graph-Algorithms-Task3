#include "centerview.h"
#include "ui_centerview.h"

CenterView::CenterView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenterView)
{
    ui->setupUi(this);
}

CenterView::~CenterView()
{
    delete ui;
}

void CenterView::on_centersCalculationTrigger_clicked()
{
    Graph * dataPointer;
    dataPointer=Engine::getInstance()->getGraph();

    if(Consistent::getMaxConsistent(dataPointer->getAdjacencyMatrix(),dataPointer->getVerticesNumber()).size()
                ==dataPointer->getVerticesNumber()){
        int graphCenter=GraphCenter::getGraphCenter(Engine::getInstance()->getGraph());
        int graphMinMaxCenter=GraphCenter::getGraphMiniMaxCenter(Engine::getInstance()->getGraph());
        ui->centerLabel->setText(QString::number(graphCenter));
        ui->minMaxCenterLabel->setText(QString::number(graphMinMaxCenter));

    }
}
