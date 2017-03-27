#ifndef DISTANCEMATRIX_H
#define DISTANCEMATRIX_H

#include <QWidget>
#include <QGridLayout>
#include <vector>
#include "distancematrix.h"
#include "consistent.h"
#include "graph.h"

#include <QLabel>
class DistanceMatrix : public QWidget
{
    Q_OBJECT
public:
    explicit DistanceMatrix(QWidget *parent = 0);

signals:

public slots:
    void update(QObject *);
private:
    Graph * dataPointer;
    QGridLayout * myLayout;
};

#endif // DISTANCEMATRIX_H
