#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;
    bool ordered = true;

    cout << "������� ������ �����" << endl;
    cin >> num1;

    while (num1 != 0)
    {
        cout << "������� ��������� �����" << endl;
        cin >> num2;

        if (num2 != 0 && num1 > num2)
        {
            ordered = false;
        }
        num1 = num2;
    }

    if (ordered)
    {
        cout << "������������������ ����������� �� �����������." << endl;
    }
    else
    {
        cout << "������������������ �� ����������� �� �����������." << endl;
    }

    return 0;
}