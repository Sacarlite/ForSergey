#include <stdio.h>
void FirstMatrixOutput(double** matrix, int n, int m)
{
	printf(" Полученая Матрица  \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf(" %f \t", matrix[i][j]);
		}
	}
	printf("\n");
}
void EndMatrixOutput(double** matrix, int n, int m)
{
	printf(" Результирующая Матрица  \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf(" %f \t", matrix[i][j]);
		}
	}
	printf("\n");
}
void VectorOutput(double* a, int aSize)
{
	if (aSize == 0)
	{
		printf("Вектор A  пуст \n");
	}
	else {
		printf(" Вектор A:  \n");
		for (int j = 0; j < aSize; j++)
		{
			printf(" %f \t", a[j]);
		}
	}
	printf("\n");
}
void GetGreatings(void)
{
	printf(" Вы наблюдаете плод воспалёного сознания больного шизофренией. ТУТ ДОЛЖНО БЫТЬ ВАШЕ ПРИВЕТСТВИЕ\n");
}
void GetMenuPoints(void)
{
	printf("Нажмите 1, если хотите заполнить матрицу вручную\n");
	printf("Нажмите 2, если хотите заполнить матрицу рандомно\n");
}