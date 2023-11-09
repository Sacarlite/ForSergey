#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandInput(double** matrix, int n, int m)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
		matrix[i][j]= -25 + rand() % (50 + 1) + rand() / (RAND_MAX + 1.0);

		}
	}

}