#include "functional.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <fstream>
#include <QFile>
#include <iostream>

using namespace std;

void functest()
{
    cout << "fucntest";
}

QString transformLayout(QString str)       // Изменение раскладки
{
    const int ABC = 66;
    //---------------------------------------------------------------------------
    QString databaseEng;
    QString databaseRus;
    QFile dataFile("source/layoutData.txt");
        if(!dataFile.open(QIODevice::ReadOnly))
        {
            return (QString)"ERROR: data corrupted";
        }
    QTextStream in(&dataFile);
    databaseEng = in.readLine();
    databaseRus = in.readLine();
    dataFile.close();
    // ------------------------------------ Считали базу данных --------------------------
    //------------------------------Далее измененеие раскладки --------------------------
    int i = 0;
    bool textEng = false, textRus = false; size_t nEng = 0, nRus = 0;
    int size_text = str.size();
    while(i < size_text)         // выянение раскладки
    {
        for (int j = 0; j < ABC; j++)
        {
            if (bool(str[i] == databaseEng[j]))
            {
                textEng = true; nEng++;
            }
            if (bool(str[i] == databaseRus[j]))
            {
                textRus = true; nRus++;
            }
        }
        i++;
    }
    if (textEng == true || textRus == true)      // замена символов
    {
        i = 0;
        if (nEng > nRus)
        {
            while (i < str.size())
            {
                for (int j = 0; j < ABC; j++)
                {
                    if (str[i] == databaseEng[j])
                        str[i] = databaseRus[j];
                }
                i++;
            }
        }
        else
        {

            while (i < str.size())
            {
                for (int j = 0; j < ABC; j++)
                {

                    if (str[i] == databaseRus[j])
                        str[i] = databaseEng[j];
                }
                i++;
            }
        }
    }
    return str;
}

