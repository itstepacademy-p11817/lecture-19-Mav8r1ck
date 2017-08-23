#include<stdio.h>
#include<stdlib.h>
int sumofcolumns(int matrix[3][4])
{
	for (int c = 0; c < 4; c++) {
		int sumc = 0;
		for (int l = 0; l < 3; l++) {
			sumc += matrix[l][c];
		}
		printf("%d\n", sumc);
	}
}
int sumofline(int matrix[3][4])
{
	
	for (int l = 0; l < 3; l++) 
	{
		int suml = 0;
		for (int c = 0; c < 4; c++) 
		{
			suml += matrix[l][c];
		}
		printf("%d\n", suml);
	}
}
int sumofall(int matrix[3][4])
{
	int suma = 0;
	for (int l = 0; l < 3; l++)
	{
		for (int c = 0; c < 4; c++)
		{
			suma += matrix[l][c];
		}
	}
	printf("%d\n", suma);
}




int main()
{
	int matrix[3][4] = {
		{3, 5, 6, 7},
		{12, 1, 1, 1},
		{0, 7, 12, 1} };
	sumofline(matrix);
	sumofcolumns(matrix);
	sumofall(matrix);
	system("pause");
	return 0;
}