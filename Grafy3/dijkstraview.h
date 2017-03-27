#ifndef DIJKSTRAVIEW_H
#define DIJKSTRAVIEW_H

#include <QWidget>
#include "engine.h"
#include "graph.h"
#include "consistent.h"
namespace Ui {
class DijkstraView;
}

class DijkstraView : public QWidget
{
    Q_OBJECT

public:
    explicit DijkstraView(QWidget *parent = 0);
    ~DijkstraView();

private slots:
    void on_generateTrigger_clicked();
public slots:
    void update(QObject*);

private:
    Ui::DijkstraView *ui;
};

#endif // DIJKSTRAVIEW_H
