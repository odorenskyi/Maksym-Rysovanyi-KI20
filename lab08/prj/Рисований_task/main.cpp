#include <iostream>
#include "ModulesRisovany.h"
#include <windows.h>

using namespace std;

void copyright()
{
    cout << "Risovaniy Maxim. CNTU 2021. (c)";
}
void expression(char a, char b, bool result)
{
    cout << "”ведiть a: ";
    cin >> a;
    cout << "”ведiть b: ";
    cin >> b;
    if(a <= b - 32)
    {
        result = 1;
    }
    else{
        result = 0;
    }
    cout << a << endl << b << endl;
    cout << "Result: " << result;
}

void func(int x, int y, int res)
{
    cout << "”ведiть число x: ";
    cin >> x;
    cout << "”ведiть число y: ";
    cin >> y;
    cout << "„исла x та y у шiстнадц€ков≥й системi численн€: " << hex << x << "  " << hex << y << endl;
    cout << "„исла x та y у дес€тковiй системi численн€: " << dec << x << "  " << dec << y << endl;
    res = s_calculation(x,y);
    cout << "–езультат у дес€тковiй cистемi: " << dec << res << endl;
    cout << "–езультат у ш≥стнадц€тковiй системi: " << hex << res << endl;
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
