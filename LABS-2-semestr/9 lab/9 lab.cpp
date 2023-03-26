#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream F1("F1.txt");
    ofstream F2("F2.txt"); 

    string line;
    unsigned int amount = 0;
    bool exist = false;
    while (getline(F1, line))
    {
        for (unsigned int i = 0; i < line.length(); i++)
            if (isdigit((unsigned char)line[i]))
                exist = true;

        if (!exist)
        {
            F2 << line << '\n';
            if (line[0] == 'A' || line[0] == 'a') 
                amount++;
        }
        else
            exist = false;
    }
    cout << " оличество строк, которые начинаютьс€ на 'A': " << amount;

    return 0;
}