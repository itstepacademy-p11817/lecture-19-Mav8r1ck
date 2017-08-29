#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void randomarray(int matrix[10][10])
{
    for (int st = 0; st < 10; st++)
    {
        for(int sb = 0; sb < 10; sb++)
            {
                matrix[st][sb] =rand()% 50;
            }
    }
}

void print(int matrix[10][10])
{
    for (int st = 0; st < 10; st++)
    {
        for(int sb = 0; sb < 10; sb++)
        {
            printf("%d ", matrix[st][sb]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void sum(int matrix[10][10], int matrix2[10][10])
{
    for (int st = 0; st < 10; st++)
    {
        for(int sb = 0; sb < 10; sb++)
        {
            matrix2[st][sb] = matrix[st][sb] + matrix[st][sb-1];
        }
    }
}


int main()
{
    int matrix[10][10] = {0,0};
    int matrix2[10][10] = {0,0};
    srand(time(NULL));
    randomarray(matrix);
    print(matrix);
    sum(matrix, matrix2);
    print(matrix2);
//    system("pause");
    return 0;
}