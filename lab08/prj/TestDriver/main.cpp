#include <iostream>
#include "ModulesRisovany.h"

using namespace std;

int main()
{
    // TestDriver for ModulesRisovaniy.a
    float x[10] = {4, 1, 2, 3, 4, 3, 0.5, 5, 1, 2};
    float y[10] = {4, 5, 2, 3, 4, 5, 10, 5, 12, 3.25};
    float S[10] = {-32.09, -122.63, -3.06, -13.11, -32.09, -104.95, -999.6, -44.12, -1724.01, -27.59};

    for(int i = 0; i < 10; i++)
    {
        if(s_calculation(x[i], y[i]) == S[i])
        {
            cout << "Passed! Your testing result = " << S[i] << endl;
        }
        if(s_calculation(x[i], y[i]) != S[i])
        {
            cout << "Failed! Your testing result != " << S[i] << endl;
        }
    }

    getchar();
    getchar();

}
