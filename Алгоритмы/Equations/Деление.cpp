#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 0;
    b = 2;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = ((pow(a, 3)*0.25)  + a - 1.2502);
        fB = ((pow(b, 3)*0.25) + b - 1.2502);
        fC = ((pow(c, 3)*0.25) + c - 1.2502);
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { cout << "Что-то не то!" << endl; }
    }
    cout << "Корни: " << a << "; " << b << endl;
    return 0;
}