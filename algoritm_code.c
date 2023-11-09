#include <stdlib.h>

void Algoritm(double** matrix, int n, int m, double* a, int* aSize)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		double max = matrix[i][0];
		if(max!=0)
		{
			a[counter] = max;
			counter++;
		}
		for (int j = 0; j < m; j++)
		{
			if(max< matrix[i][j])
			{
				max = matrix[i][j];
			}
		}
		matrix[i][0] = max;
	}
	*aSize = counter;
}