/*Задание 3 контрольной работы № 2*/
#include <stdio.h>//Подключение Библиотек
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include "manual_mas.h"
#include "random_mas.h"
#include "algoritm_code.h"
#include "screen_output.h"
#include "check_code.h"
#define QUIT 27 //присваивание QUIT значение 27(escape)

enum Menu
{
	HandInput = 1,
	RandomInput = 2
};
int main(void)// определяем функцию main
{
	setlocale(LC_CTYPE, "RU");//Подключение русской локализации
	GetGreatings();
	int userChoice = 0;
	const int N = 4;
	const int M = 5;
	do {
		int aSize = 0;
		double* A;
		//Динамическое задание массива
		double** Matrix = (double**)malloc(N * sizeof(double*));
		for (int i = 0; i < N; i++) {
			Matrix[i] = (double*)malloc(M * sizeof(double));
		}
		A = (double*)malloc(N * sizeof(double));
		GetMenuPoints();
		userChoice = GetUserChoice();
		switch (userChoice)
		{
		case HandInput:
		{
			ManualInput(Matrix, N, M);
			break;
		}
		case RandomInput:
		{
			RandInput(Matrix, N, M);
			break;
		}
		}
		FirstMatrixOutput(Matrix, N, M);
		Algoritm(Matrix, N, M, A, &aSize);
		EndMatrixOutput(Matrix, N, M);
		VectorOutput(A, aSize);
		free(A);
		for (int i = 0; i < N; i++) {
			free(Matrix[i]);
		}
		free(Matrix);
		printf("Esc - Завершить работу.\n");
		printf("Нажмите любую кнопку чтобы продолжить работу.\n");
		userChoice = _getch();//Если Выбор пользователя равен ESC программа завершается
	} while (userChoice != QUIT);
	return 0;
}
