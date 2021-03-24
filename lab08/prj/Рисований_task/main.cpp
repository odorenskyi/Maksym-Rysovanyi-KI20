#include <iostream>
#include "ModulesRisovany.h"

using namespace std;

void copyright()
{
    cout << "Risovaniy Maxim. CNTU 2021. ©";
}
void expression(char a, char b, bool result)
{
    cout << "”вед≥ть a: ";
    cin >> a;
    cout << "”вед≥ть b: ";
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
    cout << "”вед≥ть число x: ";
    cin >> x;
    cout << "”вед≥ть число y: ";
    cin >> y;
    cout << "„исла x та y у ш≥стнадц€ков≥й систем≥ численн€: " << hex << x << "  " << hex << y << endl;
    cout << "„исла x та y у дес€тков≥й систем≥ численн€: " << dec << x << "  " << dec << y << endl;
    res = s_calculation(x,y);
    cout << "–езультат у дес€тков≥й cистем≥: " << dec << res << endl;
    cout << "–езультат у ш≥стнадц€тков≥й систем≥: " << hex << res << endl;
}

int main()
{
    system("chcp 1251 & cls");
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
