#include <iostream>
#include "ModulesRisovany.h"
#include <windows.h>
#include <math.h>
#include <ctype.h>

using namespace std;

    float x = 0;
    float y = 0;
    float res = 0;

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
    cout << "Result: " << result;
}

void func(float x, float y, float res)
{
    while(x < 1)
    {
        cout << "”ведiть число x, €ке бiльше за 1: ";
        cin >> x;
    }
    while(y < 3.15)
    {
        cout << "”ведiть число y, €ке бiльше за число PI: ";
        cin >> y;
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
    bool result;
    cout << endl;
    expression(a,b,result);
    cout << endl;
    func(x,y,res);
    system("pause");
    return 0;
}
