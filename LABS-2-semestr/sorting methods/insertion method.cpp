#include <iostream>

using namespace std;

int main()
{
    int j, tmp;
    int a[] = { 0, -6, 50, 34, 1, -8 };
    int n = 6;

    for (int i = 1; i < n; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; j--)
        {
            a[j + 1] = a[j];
            a[j] = -9999; 
        }
        a[j + 1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    
}
