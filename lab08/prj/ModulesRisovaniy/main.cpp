#include <cmath>

float s_calculation(float x, float y, float z)
{
    const double PI = 3.141592653589793;
    return x*x - y*y*y + sqrt(pow(y,x) - PI);
}
