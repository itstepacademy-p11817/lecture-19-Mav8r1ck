#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void randomarray(int matrix[5][10])
{
    for (int st = 0; st < 5; st++)
    {
        for(int sb = 0; sb < 10; sb++)
            {
                matrix[st][sb] =rand()% 50;
            }
    }
}

void print(int matrix[5][10])
{
    for (int st = 0; st < 5; st++)
    {
        for(int sb = 0; sb < 10; sb++)
        {
            printf("%d ", matrix[st][sb]);
        }
        printf("\n");
    }
}

void shift(int matrix[5][10], int quantity, int side, int st, int sb) {
    if (side == 1)
    {
        for (int a = 0; a < quantity; a++)
        {
                for (int i = 0; i < sb; i++)
                {
                    int firstline = 0;
                    firstline = matrix[0][i];
                    matrix[0][i] = matrix[1][i];
                    matrix[1][i] = matrix[2][i];
                    matrix[2][i] = matrix[3][i];
                    matrix[3][i] = matrix[4][i];
                    matrix[4][i] = firstline;
                }
        }
    }
    else if(side == 2)
    {
        for (int a = 0; a < quantity; a++)
        {
            for (int i = 0; i < sb; i++)
            {
                int firstline = 0;
                firstline = matrix[4][i];
                matrix[4][i] = matrix[3][i];
                matrix[3][i] = matrix[2][i];
                matrix[2][i] = matrix[1][i];
                matrix[1][i] = matrix[0][i];
                matrix[0][i] = firstline;
            }
        }
    }
    else if(side == 3)
    {
        for (int a = 0; a < quantity; a++)
        {
            for(int j = 0; j < st; j++)
            {
                int opora = 0;
                opora = matrix[j][0];
                for (int i = 0; i <= sb-2; i++)
                {
                    matrix[j][i] = matrix[j][i+1];
                }
                matrix[j][9] = opora;
            }
        }
    }
    else if(side == 4)
    {
        for (int a = 0; a < quantity; a++)
        {
            for(int j = 0; j < st; j++)
            {
                int opora = 0;
                opora = matrix[j][9];
                for (int i = 9; i > 0; i--)
                {
                    matrix[j][i] = matrix[j][i-1];
                }
                matrix[j][0] = opora;
            }
        }
    }
}


int main()
{
    int quantity = 0;
    int side = 0;
    int matrix[5][10] = {0,0};
    srand(time(NULL));
    randomarray(matrix);
    print(matrix);
    printf("Enter quantity of shifts:\n");
    scanf("%d", &quantity);
    printf("Enter side of shift (up(1), down(2), left(3) or right(4):\n");
    scanf("%d", &side);
    shift(matrix, quantity, side, 5, 10);
    print(matrix);
//    system("pause");
    return 0;
}