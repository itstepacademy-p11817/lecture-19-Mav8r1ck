#include<stdio.h>
#include<stdlib.h>
int maxelement(int matrix[3][4])
{
	int max = matrix[0][0];
	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 4; c++)
		{
			if (max < matrix[l][c])
			{
				max = matrix[l][c];
			}
		}
	}
	printf("%d\n", max);
}
int minelement(int matrix[3][4])
{
	int min = matrix[0][0];
	for (int l = 0; l < 3; l++) 
	{
		for (int c = 0; c < 4; c++) 
		{
			if (min > matrix[l][c])
			{
				min = matrix[l][c];
			}
		}
	}
	printf("%d\n", min);
}

int sumofall(int matrix[3][4])
{
	float suma = 0.0;
	int quantityofelements = 0;
	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 4; c++)
		{
			suma += matrix[l][c];
			++quantityofelements;
		}
	}
	printf("%f\n", suma);
	printf("%d\n", quantityofelements);
	printf("%f\n", suma/quantityofelements);
}




int main()
{
	int matrix[3][4] = {
		{3, 5, 6, 7},
		{12, 1, 1, 1},
		{0, 7, 12, 1} };
	maxelement(matrix);
	minelement (matrix);
	sumofall(matrix);
	system("pause");
	return 0;
}