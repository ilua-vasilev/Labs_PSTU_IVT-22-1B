#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,-7,-5,8,10,34,5 };
    int n = 7;
    
    for (int i = 0; i < n - 1; i++)
    {
        int tmp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[tmp])
            {
                tmp = j;
            }
            swap(a[i], a[tmp]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    
}
