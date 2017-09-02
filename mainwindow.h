#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


//This is important! In order to link a function to a signal, it needs to be declared as a slot...
private slots:
    void handleButton();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
