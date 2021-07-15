#include "functional.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QString>
#include <iostream>
#include <fstream>
#include <QFile>
#include "source/utf8.h"
#include <wchar.h>


using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->ResetButton, SIGNAL(clicked()), this, SLOT(test()));
    connect(ui->textInput, SIGNAL(textChanged()), this, SLOT(layoutChange()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//------------------------functions----------------------
void MainWindow::test()
{
    functest();

}

void MainWindow::layoutChange()
{
    QString text = (ui->textInput->toPlainText()); // get text
    ui->textOut->setPlainText(transformLayout(text));  // set text
}

void MainWindow::countText()
{

}
