#include <stdbool.h>
#include <stdio.h>

int GetUserChoice(void)
{
	int  input = 0;
	while (true)
	{
		while (!scanf("%d", &input)) {
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
		if (input == 1 || input == 2)
		{
			break;
		}
		printf("������ �����. ������� ������������ �����.\n");
	}
	return input;
}
double GetDouble(void) { //������� �������� ����� ������������� �����
	double input = 0.0;
	while (!scanf("%lf", &input)) {
		while (getchar() != '\n');//������� ������ �����
		printf("������ �����. ������� ������������ �����.\n");
	}
	while (getchar() != '\n');//��������� ������ ������(���� ��� �������� �����)
	return input;
}
