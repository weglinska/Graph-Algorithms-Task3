#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_consistentGraphGeneratorTrigget_clicked();

    void on_MSTTrigger_clicked();

    void on_removeTrigget_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
