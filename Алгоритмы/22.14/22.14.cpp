#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    int sum = 0;

    cout << "please, enter N ";
    cin >> N;

    while (N != 0)
    {
        sum += N % 10;
        N /= 10;
    }
    cout << "sum = " << sum << endl;

    return 0;
}
