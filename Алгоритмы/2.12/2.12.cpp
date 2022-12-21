#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    int num;
    int max = 0;
    int min = 1000000000;
    cout << "??????? ????? ?????" << endl;

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
    cout << "?????:" << (min + max) << sum;

    return 0;

}