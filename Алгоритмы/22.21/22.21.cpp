#include <iostream>

using namespace std;

int num1, num2;

int main()
{
    setlocale(LC_ALL, "RUS");

    bool flag1 = false;// �������� �� ��������� ������������������(�.� �������� 0)
    bool flag2 = true;// �������� �� ��������������� ����� �� �����������
    bool flag_first = false;

    cout << "������� ������ �����" << endl;
    cin >> num1;

    if (num1 == 0)
        flag_first = true;

    while (!flag1 && !flag_first)
    {
        cout << "������� ��������� �����" << endl;
        cin >> num2;
        if (num2 == 0)
        {
            flag1 = true;
        }
        if (num2 < num1 && num2 != 0)
        {
            flag2 = false;
        }
        num1 = num2;
    }
    if (flag_first)
    {
        cout << "������������������ ���(������ ������ ����� 0)" << endl;
    }
    if (flag2)
    {
        cout << "����� ����������� �� �����������";
    }
    else
    {
        cout << "����� ����������� �� �� �����������";
    }

    return 0;
}