#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    int num;
    int sum = 0;

    cout << " ������� ���������� ����� ������������������" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (i == 1)
        {
            if (num == 0)
            {
                sum += num;
            }
            if (num > 0)
            {
                cout << "������ ��������� ����� ������������� " << endl;
                return 0;
            }
            if (num < 0)
            {
                cout << "������ ��������� ����� �������������" << endl;
                return 0;
            }
        }
    }

    if (sum == 0)
    {
        cout << "��� ����" << endl;
    }



    return 0;

}
