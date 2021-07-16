#include "functional.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QString>
#include <iostream>
#include <QFile>


using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->ResetButton, SIGNAL(clicked()), this, SLOT(test()));
    connect(ui->textInput, SIGNAL(textChanged()), this, SLOT(EnterText()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//------------------------functions----------------------
void MainWindow::EnterText()
{
    int indexMode = ui->selectMode->currentIndex();
    if(indexMode == 0)
        countText();
    else
    {
        ui->valueSymbols->display(0);
        ui->valueWords->display(0);
        ui->valueSymbolsWithoutSpace->display(0);
    }
    if(indexMode == 1)
        layoutChange();
}



void MainWindow::test()
{
    functest();
}

void MainWindow::layoutChange()
{
    QString text = ui->textInput->toPlainText(); // get text
    ui->textOut->setPlainText(transformLayout(text));  // set text
}

void MainWindow::countText()
{
    QString text = ui->textInput->toPlainText();    // get text
    int symbols=0, words=0, symbolsWithoutSpace=0;
    countSymbolsAndWords(text, symbols, words, symbolsWithoutSpace);
    ui->valueSymbols->display(symbols);
    ui->valueWords->display(words);
    ui->valueSymbolsWithoutSpace->display(symbolsWithoutSpace);
    ui->textOut->setPlainText("Text is not displayed in count mode\n'Cause I'm toxic developer");
}
