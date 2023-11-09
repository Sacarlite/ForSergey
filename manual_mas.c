#include <stdio.h>
#include "check_code.h"
void ManualInput(double** matrix, int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf(" Matrix[%d][%d]= \n", i+1,j+1);
			matrix[i][j] = GetDouble();
		}
	}
}