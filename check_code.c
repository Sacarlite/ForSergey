#include <stdbool.h>
#include <stdio.h>

int GetUserChoice(void)
{
    char temprem;
    int input = 0;
    while (true)
    {
        temprem = 0;
        if ((!scanf("%d%c", &input, &temprem)) || temprem != '\n')
        {
            printf("������ �����.\n������� �����: ");
            while (getchar() != '\n');
        }
        else if (input == 1 || input == 2) {
            return input;
        }

    }
}
double GetDouble(void) { //������� �������� ����� ������������� �����
    char temprem;
    double input = 0;
    while (true)
    {
        temprem = 0;
        if ((!scanf("%lf%c", &input, &temprem)) || temprem != '\n')
        {
            printf("������ �����.\n������� �����: ");
            while (getchar() != '\n'); //������ ����� �-��� getchar()
        }
        else
            return input;
    }
}
