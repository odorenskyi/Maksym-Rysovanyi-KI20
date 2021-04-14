#include <iostream>
#include "ModulesRisovany.h"

using namespace std;

double x = 0;
int x_s = 0;
int y_s = 0;
double res = 0;
int N = 0;
int res_2 = 0;

void copyright()
{
    cout << "Risovaniy Maxim. CNTU 2021. (c)" << endl;
}
void electro()
{
    while(x < 1)
    {
        cout << "Уведiть кiлькiсть спожитої за мiсяць електроенергiї(число бiльше за 1): ";
        cin >> x;
    }
    res = electricity(x);
    cout << "Результат: " << res/100 << endl;
}

void tempCF()
{
    float arrTemp[12];
    for(int i = 0; i < 12; i++)
    {
        cout << "Уведiть температуру за " << i + 1 << " мiсяць: ";
        cin >> arrTemp[i];
    }

    cout << endl;

    cout << "Середньорiчна температура за Цельсiєм: " << temperature_1(arrTemp) << endl;
    cout << "Середньорiчна температура за Фаренгейтом: " << temperature_2(arrTemp) << endl;
}

void bit_task()
{
    while(true)
    {
        cout << "Уведiть число у дiапазонi вiд 0 до 5740500: ";
        cin >> N;
        if(N >= 0 && N <= 5740500)
        {
            cout << bit_operation(N) << endl;
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    copyright();

    char input = 0;
    while(true)
    {
        cout << "Для виклику задачi 8.1 - n, для виклику задачi 9.1 - v, для виклику задачi 9.2 - c, Для виклику задачi 9.3 - x" << endl;
        cout << "Уведiть ключ для викликання певної функцiї." << endl;
        cin >> input;
        if(input == 'n')
        {
            while(x_s < 1)
            {
                cout << "Уведiть число x, яке бiльше за 1: ";
                cin >> x_s;
            }
            while(y_s <= 4)
            {
                cout << "Уведiть число y, яке бiльше 4: ";
                cin >> y_s;
            }
            cout << "Числа x та y у шiстнадцяковiй системi числення: " << hex << x_s << "  " << hex << y_s << endl;
            cout << "Числа x та y у десятковiй системi числення: " << dec << x_s << "  " << dec << y_s << endl;
            res_2 = s_calculation(x_s,y_s);
            cout << "Результат у десятковiй cистемi: " << dec << res_2 << endl;
            cout << "Результат у шiстнадцятковiй системi: " << hex << res_2 << endl;

            cout << "Для виходу з програми натиснiть z або Z" << endl;

        }
        else if(input == 'v')
        {
            electro();

            cout << "Для виходу з програми натиснiть z або Z" << endl;
        }
        else if(input == 'c')
        {
            tempCF();

            cout << "Для виходу з програми натиснiть z або Z" << endl;
        }
        else if(input == 'x')
        {
            bit_task();

            cout << "Для виходу з програми натиснiть z або Z" << endl;
        }
        else if(input == 'z' || input == 'Z')
        {
            break;
        }
        else
        {
            cout << '\a';
            cout << "Ви увели неправильний символ!" << endl;
        }
    }
}
