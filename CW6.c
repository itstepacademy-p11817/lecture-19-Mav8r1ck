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
    printf("\n\n");
}

void fastsort (int matrix[], int left, int right)
{

    int opora = matrix[left];
    int lgranica = left;
    int rgranica = right;
    while (left < right)
    {
        for(right; matrix[right] >= opora && left < right; right--)
        {

        }
        if (right != left)
        {
            matrix[left]=matrix[right];
        }

        for(left; matrix[left] <= opora && left < right; left++)
        {

        }
        if (right != left)
        {
            matrix[right] = matrix[left];
        }

    }
    matrix[left]= opora;
    opora = left;
    left = lgranica;
    right = rgranica;

    if(left < opora)
    {
        fastsort(matrix, left, opora - 1);
    }
    if(right > opora)
    {
        fastsort(matrix, opora + 1, right);
    }
}

int main()
{

    int matrix[5][10] = {0,0};
    srand(time(NULL));
    randomarray(matrix);
    print(matrix);
    for(int i = 0; i < 5; i++)
    {
        fastsort(matrix[i], 0, 9);
    }
    print(matrix);
//    system("pause");
    return 0;
}