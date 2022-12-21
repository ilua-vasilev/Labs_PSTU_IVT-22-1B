#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;
    bool ordered = true;

    cout << "¬ведите первое число" << endl;
    cin >> num1;

    while (num1 != 0)
    {
        cout << "¬ведите следующее число" << endl;
        cin >> num2;

        if (num2 != 0 && num1 > num2)
        {
            ordered = false;
        }
        num1 = num2;
    }

    if (ordered)
    {
        cout << "ѕоследовательность упор€дочена по возрастанию." << endl;
    }
    else
    {
        cout << "ѕоследовательность не упор€дочена по возрастанию." << endl;
    }

    return 0;
}