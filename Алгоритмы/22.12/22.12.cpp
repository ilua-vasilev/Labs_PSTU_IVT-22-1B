#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    int num;
    int max = 0;
    int min = 1000000000;
    int sum = 0;
    cout << "Введите колво чисел" << endl;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;

        if (num > max)
        {
            max = num;
        }

        if (num < min)
        {
            min = num;
        }


    }
    sum = min + max;
    cout << "Сумма:" << sum;

    return 0;

}
