#include "functional.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QString>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->ResetButton, SIGNAL(clicked()), this, SLOT(test()));
    connect(ui->textInput, SIGNAL(textChanged()), this, SLOT(Text()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::test()
{
    //functest();
    char str[] = "Ghbdtn vbh";
    char* str1 = transformLayout(str);
    ui->textOut->setText(str1);
    printf(str1);
}


void MainWindow::Text()
{
    QString text = (ui->textInput->toPlainText()); // get str
    QByteArray ba = text.toLocal8Bit();
    const char *str = ba.data();    //  str to char
    char str1[] = "Ghbdtn vbh";
    char* str2 = transformLayout(str1);

    ui->textOut->setText(str2);
}
