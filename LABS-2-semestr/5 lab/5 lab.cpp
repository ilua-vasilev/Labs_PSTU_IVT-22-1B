#include <iostream>
#include <iomanip>

void transpose(int matrix[5][5])
{
    int t;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i; j < 5; ++j)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

int main()
{
    int m[5][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };


    transpose(m);
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j) 
        {
            std::cout << " " << m[i][j];
        } 
        std::cout << '\n';
    }

    return 0;
}
