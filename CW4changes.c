#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int randommatrix(int matrix[5][10])
{

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            matrix[l][c] = rand() % 50;
        }
    }
}

int multiplication (int matrix[5][10], int matrix2[5][5])
{
    for (int l = 0; l < 5; l++)
    {
        int n = 0;
        for (int c = 0; c < 10; c += 2)
        {
            int m = 0;
            m = (matrix[l][c]+matrix[l][c+1]);
            matrix2[l][n] = m;
            n++;
        }
    }
}

int main()
{
    int matrix[5][10] = {0, 0};

    int matrix2[5][5] = {0, 0};

    srand(time(NULL));

    randommatrix(matrix);

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            printf("%d ", matrix[l][c]);
        }
        printf("\n");
    }
    multiplication(matrix, matrix2);

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d ", matrix2[l][c]);
        }
        printf("\n");
    }
//    system("pause");
    return 0;
}