#include <iostream>
#include "ModulesRisovany.h"
#include <windows.h>
#include <math.h>
#include <ctype.h>

using namespace std;

void copyright()
{
    cout << "Risovaniy Maxim. CNTU 2021. (c)";
}
void expression(char a, char b, bool result)
{
    cout << "”ведiть символ a: ";
    cin >> a;
    cout << "”ведiть символ b: ";
    cin >> b;
    if(a <= b - 32)
    {
        result = 1;
    }
    else{
        result = 0;
    }
    // cout << a << endl << b << endl;
    cout << "Result: " << result;
}

void func(float x, float y, float res)
{
    cout << "”ведiть число x: ";
    cin >> x;
    if(x < 0 || cin.fail())
    {
        cout << "”ведiть цiле натуральне число!" << endl;
        system("pause");
        getchar();
        getchar();
        exit(0);
    }
    cout << "”ведiть число y: ";
    cin >> y;
    if(y < 3.15 || cin.fail())
    {
        cout << "”ведiть цiле натуральне число та €ке бiльше числа PI!" << endl;
        system("pause");
        getchar();
        getchar();
        exit(0);
    }
    cout << "„исла x та y у шiстнадц€ковiй системi численн€: " << hexfloat << x << "  " << hexfloat << y << endl;
    cout << "„исла x та y у дес€тковiй системi численн€: " << defaultfloat << x << "  " << defaultfloat << y << endl;
    res = s_calculation(x,y);
    cout << "–езультат у дес€тковiй cистемi: " << defaultfloat << res << endl;
    cout << "–езультат у шiстнадц€тковiй системi: " << hexfloat << res << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    copyright();
    char a;
    char b;
    int x = 0;
    int y = 0;
    int res = 0;
    bool result;
    cout << endl;
    expression(a,b,result);
    cout << endl;
    func(x,y,res);
    system("pause");
    return 0;
}
