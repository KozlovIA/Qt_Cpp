#include "functional.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"


void functest()
{
    printf("fucntest");
}

char* transformLayout(char str[])       // Р?Р·РјРµРЅРµРЅРёРµ СЂР°СЃРєР»Р°РґРєРё
{
    const int ABC = 67;
    char databaseEng[] = "~QWERTYUIOP{}ASDFGHJKL:'ZXCVBNM<>`qwertyuiop[]asdfghjkl;'zxcvbnm,.";
    char databaseRus[] = "ЁЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮёйцукенгшщзхъфывапролджэячсмитьбю";
    int i = 0;
    bool textEng = false, textRus = false; size_t nEng = 0, nRus = 0;
    while(str[i] != NULL)         // выянение раскладки
    {
        for (int j = 0; j < ABC; j++)
        {
            if (str[i] == databaseEng[j])
            {
                textEng = true; nEng++;
            }
            if (str[i] == databaseRus[j])
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
            while (str[i] != NULL)
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

            while (str[i] != NULL)
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
