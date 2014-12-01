/* File: lab5_1_2.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 11.11.2014 */

#define _CRT_SECURE_NO_WARNINGS									// suppress warnings about unsafe scanf (C4996)
#include <stdio.h>									
#include <stdlib.h>

#define PLANES 4
#define ROWS 2
#define	COLUMNS 3

int print_3D_matrix(double [][ROWS][COLUMNS]);

int main()
{
	int i, j, k;
	double matrix_3D[PLANES][ROWS][COLUMNS] =
	{
		{	
			{1,2,3},
			{4,5,6},
		},
		{  
			{11,22,33},
			{44,55,66},
		},
		{
			{111,222,333},
			{444,555,666},
		},
		{
			{1111,2222,3333},
			{4444,5555,6666},
		},
	};

	print_3D_matrix(matrix_3D);

	system("pause");
	return 0;
}

int print_3D_matrix(double matrix[][ROWS][COLUMNS])
{
	int plane = 0;
	int row = 0;
	int column = 0;

	while(plane < PLANES) //?
	{
		row = 0;
		while(row < ROWS)
		{
			column = 0;
			while(column < COLUMNS)
			{
				printf("%.0lf ", matrix[plane][row][column]);
				column++;
			}
			printf("\n");
			row++;
		}
		printf("\n");
		plane++;
	}
	return 0;
}