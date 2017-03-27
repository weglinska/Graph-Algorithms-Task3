#ifndef MATRIXW_H
#define MATRIXW_H

#include <QWidget>
#include <QGridLayout>
#include <vector>
#include "matrixvievcell.h"
#include "graph.h"
#include "engine.h"

class MatrixWeight : public QWidget
{
    Q_OBJECT
public:
    explicit MatrixWeight(QWidget *parent = 0);
signals:
    void changed(QObject * sender);
public slots:
    void cellChanged(QPoint coordinates,int value);
    void update(QObject * sender=NULL);
private:
    Graph * dataPointer;
    QGridLayout * myLayout;
};

#endif // MATRIXVIEW_H
