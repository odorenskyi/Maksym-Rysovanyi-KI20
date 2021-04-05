#include <iostream>
#include "ModulesRisovany.h"
#include <windows.h>
#include <math.h>
#include <ctype.h>

using namespace std;

    int x = 0;
    int y = 0;
    int res = 0;

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

void func(int x, int y, int res)
{
    while(x < 1)
    {
        cout << "”ведiть число x, €ке бiльше за 1: ";
        cin >> x;
    }
    while(y <= 4)
    {
        cout << "”ведiть число y, €ке бiльше 4: ";
        cin >> y;
    }
    cout << "„исла x та y у шiстнадц€ковiй системi численн€: " << hex << x << "  " << hex << y << endl;
    cout << "„исла x та y у дес€тковiй системi численн€: " << dec << x << "  " << dec << y << endl;
    res = s_calculation(x,y);
    cout << "–езультат у дес€тковiй cистемi: " << dec << res << endl;
    cout << "–езультат у шiстнадц€тковiй системi: " << hex << res << endl;
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
