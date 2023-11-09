#include <stdio.h>
void FirstMatrixOutput(double** matrix, int n, int m)
{
	printf(" ��������� �������  \n");
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
	printf(" �������������� �������  \n");
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
		printf("������ A  ���� \n");
	}
	else {
		printf(" ������ A:  \n");
		for (int j = 0; j < aSize; j++)
		{
			printf(" %f \t", a[j]);
		}
	}
	printf("\n");
}
void GetGreatings(void)
{
	printf(" �� ���������� ���� ���������� �������� �������� �����������. ��� ������ ���� ���� �����������\n");
}
void GetMenuPoints(void)
{
	printf("������� 1, ���� ������ ��������� ������� �������\n");
	printf("������� 2, ���� ������ ��������� ������� ��������\n");
}