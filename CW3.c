#include<stdio.h>
#include<stdlib.h>
int compositionoftwo(int matrix[3][4], int matrix2[3][4], int matrix3[3][4])
{
	
	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 4; c++)
		{
			matrix3[l][c] = matrix[l][c] * matrix2[l][c];
		}
	}
}

int main()
{
	int matrix[3][4] = {
		{3, 5, 6, 7},
		{12, 1, 1, 1},
		{0, 7, 12, 1} };

	int matrix2[3][4] = {
		{1, 12, 7, 0},
		{1, 1, 1, 12},
		{7, 6, 5, 3} };

	int matrix3[3][4] = { 0, 0 };

	compositionoftwo(matrix, matrix2, matrix3);

	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 4; c++)
		{
			printf("%d ", matrix3[l][c]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}