#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int i, j, n, m, k;
    int a[100][100], K[100];
    setlocale(0, "RUS");

    cout << "Введите количество строк:";
    cin >> n;
    cout << "Введите количество столбцов:";
    cin >> m;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 100;

    cout << "Матрица:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << "\t" << a[i][j] << " ";
        cout << endl;
    }

    cout << "Введите номер столбца, который необходимо вставить:"; cin >> k;
    if (k > m + 1) cout << "Некорректное значение k";
    else {
        cout << "Введите элементы столбца:" << endl;
        for (i = 0; i < n; i++) {
            cin >> K[i];
        }

        cout << "Новая матрица:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == k - 1) {
                    cout << "\t" << K[j] << " ";
                }
                else cout << "\t" << a[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
