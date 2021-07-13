#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->ResetButton, SIGNAL(clicked()), this, SLOT(test()));
    //connect(ui->)

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::test()
{
    printf("qwerty");
}
