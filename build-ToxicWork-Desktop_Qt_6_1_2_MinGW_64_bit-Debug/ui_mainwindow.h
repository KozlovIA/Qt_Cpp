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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMAin;
    QAction *action;
    QWidget *centralwidget;
    QPushButton *ResetButton;
    QWidget *gridLayoutWidget;
    QGridLayout *MainLayout;
    QTextEdit *textOut;
    QTextEdit *textInput;
    QGridLayout *LayoutForCount;
    QLCDNumber *valueSymbolsWithoutSpace;
    QLCDNumber *valueWords;
    QLCDNumber *valueSymbols;
    QLabel *countWords;
    QLabel *countSymbols;
    QLabel *countSymbolsWithoutSpace;
    QComboBox *selectMode;
    QLabel *label;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuToxic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(803, 604);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        actionMAin = new QAction(MainWindow);
        actionMAin->setObjectName(QString::fromUtf8("actionMAin"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ResetButton = new QPushButton(centralwidget);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));
        ResetButton->setGeometry(QRect(0, 0, 331, 31));
        ResetButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(206, 206, 206);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 40, 801, 521));
        MainLayout = new QGridLayout(gridLayoutWidget);
        MainLayout->setObjectName(QString::fromUtf8("MainLayout"));
        MainLayout->setContentsMargins(0, 0, 0, 0);
        textOut = new QTextEdit(gridLayoutWidget);
        textOut->setObjectName(QString::fromUtf8("textOut"));

        MainLayout->addWidget(textOut, 2, 2, 1, 1);

        textInput = new QTextEdit(gridLayoutWidget);
        textInput->setObjectName(QString::fromUtf8("textInput"));

        MainLayout->addWidget(textInput, 0, 2, 1, 1);

        LayoutForCount = new QGridLayout();
        LayoutForCount->setObjectName(QString::fromUtf8("LayoutForCount"));
        valueSymbolsWithoutSpace = new QLCDNumber(gridLayoutWidget);
        valueSymbolsWithoutSpace->setObjectName(QString::fromUtf8("valueSymbolsWithoutSpace"));
        valueSymbolsWithoutSpace->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 244, 221);"));

        LayoutForCount->addWidget(valueSymbolsWithoutSpace, 2, 1, 1, 1);

        valueWords = new QLCDNumber(gridLayoutWidget);
        valueWords->setObjectName(QString::fromUtf8("valueWords"));
        valueWords->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 244, 221);"));

        LayoutForCount->addWidget(valueWords, 1, 1, 1, 1);

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

        countWords = new QLabel(gridLayoutWidget);
        countWords->setObjectName(QString::fromUtf8("countWords"));
        countWords->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countWords, 1, 0, 1, 1);

        countSymbols = new QLabel(gridLayoutWidget);
        countSymbols->setObjectName(QString::fromUtf8("countSymbols"));
        countSymbols->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countSymbols, 0, 0, 1, 1);

        countSymbolsWithoutSpace = new QLabel(gridLayoutWidget);
        countSymbolsWithoutSpace->setObjectName(QString::fromUtf8("countSymbolsWithoutSpace"));
        countSymbolsWithoutSpace->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 221);\n"
"color: rgb(0, 0, 0);"));

        LayoutForCount->addWidget(countSymbolsWithoutSpace, 2, 0, 1, 1);


        MainLayout->addLayout(LayoutForCount, 4, 2, 1, 1);

        selectMode = new QComboBox(centralwidget);
        selectMode->addItem(QString());
        selectMode->addItem(QString());
        selectMode->setObjectName(QString::fromUtf8("selectMode"));
        selectMode->setGeometry(QRect(430, 0, 371, 31));
        selectMode->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(206, 206, 206);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 0, 101, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(206, 206, 206);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 20));
        menuToxic = new QMenu(menubar);
        menuToxic->setObjectName(QString::fromUtf8("menuToxic"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuToxic->menuAction());
        menuToxic->addAction(action);

        retranslateUi(MainWindow);
        QObject::connect(ResetButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showNormal));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMAin->setText(QCoreApplication::translate("MainWindow", "MAin", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\242\321\203\321\202 \320\277\320\276\320\272\320\260 \320\275\320\270\321\207\320\265\320\263\320\276 \320\275\320\265\321\202", nullptr));
        ResetButton->setText(QCoreApplication::translate("MainWindow", "Reset window", nullptr));
        countWords->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265", nullptr));
        countSymbols->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265", nullptr));
        countSymbolsWithoutSpace->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\261\320\265\320\267  \320\277\321\200\320\276\320\261\320\265\320\273\320\276\320\262", nullptr));
        selectMode->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\321\207\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
        selectMode->setItemText(1, QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\200\320\260\321\201\320\272\320\273\320\260\320\264\320\272\320\270", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202", nullptr));
        menuToxic->setTitle(QCoreApplication::translate("MainWindow", "Toxic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
