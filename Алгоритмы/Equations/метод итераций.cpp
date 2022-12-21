#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float x, xPrev;
    double lambda = -0.25; 
    x = 2; 
    xPrev = 0; 
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (pow(xPrev, 3)*0.25 + xPrev - 1.2502) + xPrev;
    }
    cout << "Корень: " << x << endl;
    return 0;
}