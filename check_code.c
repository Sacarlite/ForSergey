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
		printf("Ошибка ввода. Введите вещественное число.\n");
	}
	return input;
}
double GetDouble(void) { //функция проверки ввода вещественного числа
	double input = 0.0;
	while (!scanf("%lf", &input)) {
		while (getchar() != '\n');//очистка потока ввода
		printf("Ошибка ввода. Введите вещественное число.\n");
	}
	while (getchar() != '\n');//Повторная чистка потока(даже при успешном вводе)
	return input;
}
