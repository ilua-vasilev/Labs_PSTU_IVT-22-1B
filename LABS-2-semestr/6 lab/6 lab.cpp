#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char bukvu[255];
    cout << "¬ведите строку: ";
    cin.getline(bukvu, 256);

    int cifru[255]; 
    int last = 0;
    int bufer;
    for (int i = 0; i < 255; i++) 
        if (isdigit((unsigned char)bukvu[i])) 
        {
            cifru[last] = bukvu[i];
            last++;
        }

    for (int i = 0; i < 255; i++)
        for (int j = i + 1; j < 255; j++)
            if (cifru[j] > cifru[i])
            {
                bufer = cifru[j];
                cifru[j] = cifru[i];
                cifru[i] = bufer;
            }

    last = 0;
    for (int i = 0; i < 255; i++) 
        if (isdigit((unsigned char)bukvu[i]))
        {
            bukvu[i] = cifru[last];
            last++;
        }
    cout << "ќбработанный текст: \n" << bukvu;

    return 0;
}