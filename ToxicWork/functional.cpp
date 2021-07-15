#include "functional.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
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
    const int size_text = str.size();
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
            while (i < size_text)
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

            while (i < size_text)
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

void countSymbolsAndWords(QString text, int &symbols, int &words, int &symbolsWithoutSpace)
{
    QString checkSymbols;
    QFile dataFile("source/symbolsData.txt");
        if(!dataFile.open(QIODevice::ReadOnly))
        {
            text = (QString)"ERROR: data corrupted";
        }
    QTextStream in(&dataFile);
    checkSymbols = in.readLine();
    dataFile.close();
    // ------------------------Считывание данных завершено-----Дальше реализация---------------------------------------
    int size_checkSymbols = checkSymbols.size();
    int sizeText = text.size();
    for(int i = 0; i < sizeText; i++)
    {
        if (text[i] != '\n')
        {
            symbols++;
            if (text[i] != ' ')
            {
                symbolsWithoutSpace++;
            }
        }
            bool maybeWord = true, maybeWordEnter = true;
            for (int j = 0; j < size_checkSymbols; j++)
            {
                if(i == 0 && text[i] != checkSymbols[j] && text[i] != '\n')
                {
                    words++;
                    break;
                }
                if(i > 0 && i+1 < sizeText)
                {
                    if(text[i] == checkSymbols[j])
                    {
                        for(int k = 0; k < size_checkSymbols; k++)
                        {
                            if(text[i+1] == checkSymbols[k] || text[i+1] == '\n')
                            {
                                maybeWord = false;
                                break;
                            }
                        }
                        if(maybeWord)
                        {
                            words++;
                        }
                    }
                }
            }
            if(i>0)
            {
            if(text[i-1] == '\n')
            {
                for(int k = 0; k < size_checkSymbols; k++)
                {
                    if(text[i] == checkSymbols[k] || text[i] == '\n')
                    {
                        maybeWordEnter = false;
                        break;
                    }
                }
                if(maybeWordEnter)
                {
                    words++;
                }
            }
            }
    }
}
