#include "mainwindow.h"
#include "ui_mainwindow.h"

//Global variable to be displayed by the LCDwidget
int LCDval;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Mannually connect the Signal of the Slider to the Slot of the Progress bar
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

    //Initialise the LCDvalue...This highlights that this function is called to setup the MainWindow...
    LCDval = 0;
    /*Connect the Push button Signal 'clicked()' to the MainWindow's handleButton() function... a custom function that
      is declared in 'mainwindow.h' as a private Slot...*/

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(handleButton()));

}

void MainWindow::handleButton()
{
    //This function, belonging to MainWindow has access to all of its components, and subsequently their functions...
    ui->lcdNumber->display(++LCDval);
}

MainWindow::~MainWindow()
{
    delete ui;
}
