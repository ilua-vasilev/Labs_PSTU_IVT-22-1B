#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int N;
    int S;

    cout << "������� ����������� ����� N" << endl;
    cin >> N;
    cin >> S;

    while (N > 0)
    {
        if (N % 10 == S)
        {
            cout << "����� S ������ � ������ ����� N" << endl;
            return 0;
        }
        else
        {
            N /= 10;
        }

    }
    cout << "����� S �� ������ � ������ ����� N" << endl;

    return 0;
}