#include <cmath>

float s_calculation(float x, float y)
{
    const double PI = 3.141592653589793;
    float S = x*x - y*y*y + sqrt(pow(y,x) - PI);
    S = int(S*100 + 0.5)/100.0;
    return S;
}
