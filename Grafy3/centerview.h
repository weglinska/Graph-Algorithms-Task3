#ifndef CENTERVIEW_H
#define CENTERVIEW_H

#include <QWidget>
#include "graphcenter.h"
#include "engine.h"
#include "consistent.h"
namespace Ui {
class CenterView;
}

class CenterView : public QWidget
{
    Q_OBJECT

public:
    explicit CenterView(QWidget *parent = 0);
    ~CenterView();

private slots:
    void on_centersCalculationTrigger_clicked();

private:
    Ui::CenterView *ui;
};

#endif // CENTERVIEW_H
