#include "distancematrix.h"


#include "matrixview.h"

DistanceMatrix::DistanceMatrix(QWidget *parent) : QWidget(parent)
{
    myLayout=NULL;
}

void DistanceMatrix::update(QObject * sender){
    if(sender==this){
        return;
    }

    dataPointer=Engine::getInstance()->getGraph();

    if(myLayout!=NULL){
        for(int i=0;i<myLayout->columnCount();i++){
            for(int j=0;j<myLayout->rowCount();j++){
                if(!myLayout->itemAtPosition(j,i)->isEmpty()){
                    delete myLayout->itemAtPosition(j,i)->widget();
                }
                delete myLayout->itemAtPosition(j,i);
            }
        }
        delete myLayout;
    }

    myLayout=new QGridLayout();
    this->setLayout(myLayout);

    if(Consistent::getMaxConsistent(dataPointer->getAdjacencyMatrix(),dataPointer->getVerticesNumber()).size()
            ==dataPointer->getVerticesNumber()){
        dataPointer->updateDistanceMatrix();
        for (int index=0;index<dataPointer->getVerticesNumber();index++){
            // change if new container
            for (int index2=0;index2<(*dataPointer).getVerticesNumber();index2++){
                QLabel * mv=new QLabel(QString::number(dataPointer->getDistance(index,index2)));
                myLayout->addWidget(mv,index,index2);
            }
        }
        setMaximumSize(((*dataPointer).getVerticesNumber())*27,((*dataPointer).getVerticesNumber())*27);
    }
    else{
        QLabel * mv =new QLabel("Graf nie jest spójny");
        myLayout->addWidget(mv,0,0);
    }

}


