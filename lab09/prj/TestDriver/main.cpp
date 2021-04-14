#include <iostream>
#include <cmath>
#include "ModulesRisovany.h"

using namespace std;

int main()
{
    cout << "Task9_1 [TestDriver]" << endl;
    int a[5] = {100, 150, 175, 155, 805};
    double res[5] = {13084.3, 19626.45, 42340.38, 37501.48, 429907.84};
    int b = 0;
    double b1 = 0;
    int c = 0;
    double c1 = 0;
    for(int i = 0; i < 5; i++)
    {
        b = electricity(a[i]);
        b1 = b;
        c = round(res[i]*100);
        c1 = c;
        if(b == c)
        {
            cout << "Passed! Your testing result = " << c1/100 << endl;
        }
        if(b != c)
        {
            cout << "Test Res - " << b1/100 << endl;
            cout << "Failed! Your testing result != " << c1/100 << endl;
        }
    }
    cout << endl;

 cout << "Task9_2 [TestDriver]" << endl;
    float temp[5][12]=
    {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {10, 12, 15, 17, 19, 22, 26, 28, 20, 15, 11, 2},
        {-5, 10, 15, -1, 22, 44, 33, 10, -6, -9, -10, 2},
        {0, 10, 15, 20, 5, -5, -10, -22, 4, 6, 8, 10},
        {-2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13}
    };
    float res_2[5][2] =
    {
        {6.5, 43.7},
        {16.4167, 61.55},
        {8.75, 47.75},
        {3.41667, 38.15},
        {-7.5, 18.5}
    };
    for(int i = 0; i < 5; i++)
    {
        cout << "Result Celsius = " << temperature_1(temp[i]) << endl;
        cout << "Passed - " << res_2[i][0] << endl;
        cout << "Result Farengates =  " << temperature_2(temp[i]) << endl;
        cout << "Passed - " << res_2[i][1] << endl;
    }

    cout << endl;

    cout << "Task9_3 [TestDriver]" << endl;
    int bit_number[5] = {1, 2, 5, 10, 100};
    int bit_result_number[5] = {0, 1, 1, 2 ,4};
    for (int i = 0; i < 5; i++)
    {
        if(bit_operation(bit_number[i]) == bit_result_number[i])
        {
            cout << bit_result_number[i] << " Passed!"  << endl;
        }
        else
        {
            cout << bit_result_number[i] << "Failed!" << endl;
        }
    }
    system("pause");
}
