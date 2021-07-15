/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *ResetButton;
    QWidget *gridLayoutWidget;
    QGridLayout *MainLayout;
    QGridLayout *LayoutForCount;
    QLabel *countWords;
    QLCDNumber *valueWords;
    QLabel *countSymbolsWithoutSpace;
    QLabel *countSymbols;
    QLCDNumber *valueSymbolsWithoutSpace;
    QLCDNumber *valueSymbols;
    QTextEdit *textInput;
    QSpacerItem *verticalSpacer;
    QTextEdit *textOut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(803, 604);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 0, 461, 31));
        ResetButton = new QPushButton(centralwidget);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));
        ResetButton->setGeometry(QRect(0, 0, 80, 21));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 30, 801, 501));
        MainLayout = new QGridLayout(gridLayoutWidget);
        MainLayout->setObjectName(QString::fromUtf8("MainLayout"));
        MainLayout->setContentsMargins(0, 0, 0, 0);
        LayoutForCount = new QGridLayout();
        LayoutForCount->setObjectName(QString::fromUtf8("LayoutForCount"));
        countWords = new QLabel(gridLayoutWidget);
        countWords->setObjectName(QString::fromUtf8("countWords"));
        countWords->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countWords, 1, 0, 1, 1);

        valueWords = new QLCDNumber(gridLayoutWidget);
        valueWords->setObjectName(QString::fromUtf8("valueWords"));
        valueWords->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 244, 221);"));

        LayoutForCount->addWidget(valueWords, 1, 1, 1, 1);

        countSymbolsWithoutSpace = new QLabel(gridLayoutWidget);
        countSymbolsWithoutSpace->setObjectName(QString::fromUtf8("countSymbolsWithoutSpace"));
        countSymbolsWithoutSpace->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countSymbolsWithoutSpace, 2, 0, 1, 1);

        countSymbols = new QLabel(gridLayoutWidget);
        countSymbols->setObjectName(QString::fromUtf8("countSymbols"));
        countSymbols->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countSymbols, 0, 0, 1, 1);

        valueSymbolsWithoutSpace = new QLCDNumber(gridLayoutWidget);
        valueSymbolsWithoutSpace->setObjectName(QString::fromUtf8("valueSymbolsWithoutSpace"));
        valueSymbolsWithoutSpace->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 244, 221);"));

        LayoutForCount->addWidget(valueSymbolsWithoutSpace, 2, 1, 1, 1);

        valueSymbols = new QLCDNumber(gridLayoutWidget);
        valueSymbols->setObjectName(QString::fromUtf8("valueSymbols"));
        valueSymbols->setAcceptDrops(false);
        valueSymbols->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 244, 221);"));
        valueSymbols->setFrameShape(QFrame::Box);
        valueSymbols->setFrameShadow(QFrame::Raised);
        valueSymbols->setLineWidth(1);
        valueSymbols->setSegmentStyle(QLCDNumber::Filled);
        valueSymbols->setProperty("intValue", QVariant(0));

        LayoutForCount->addWidget(valueSymbols, 0, 1, 1, 1);


        MainLayout->addLayout(LayoutForCount, 2, 2, 1, 1);

        textInput = new QTextEdit(gridLayoutWidget);
        textInput->setObjectName(QString::fromUtf8("textInput"));

        MainLayout->addWidget(textInput, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        MainLayout->addItem(verticalSpacer, 0, 1, 3, 1);

        textOut = new QTextEdit(gridLayoutWidget);
        textOut->setObjectName(QString::fromUtf8("textOut"));

        MainLayout->addWidget(textOut, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(ResetButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showNormal));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202", nullptr));
        ResetButton->setText(QCoreApplication::translate("MainWindow", "Reset window", nullptr));
        countWords->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265", nullptr));
        countSymbolsWithoutSpace->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\261\320\265\320\267  \320\277\321\200\320\276\320\261\320\265\320\273\320\276\320\262", nullptr));
        countSymbols->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
