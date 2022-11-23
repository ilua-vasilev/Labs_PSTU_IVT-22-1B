#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    int max = 0;
    int num;
    cout << "введите количество цифр последовательности" << endl;
    cin >> n;

    for (int i = 1;i<= n; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;

    return 0;
}