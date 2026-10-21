#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <Windows.h>
int task2();
int task3();
int main()
{

    SetConsoleOutputCP(65001);
    task2();
    task3();

}
int task2()
{
    float x, y;
    char znak;
    printf("Введите выражение\n");

    scanf("%f%c%f", &x, &znak, &y);

    switch (znak) {
    case '+':
        printf("=%.4f\n", x + y);
        break;
    case '-':
        printf("=%.4f\n", x - y);
        break;
    case '*':
        printf("=%.4f\n", x * y);
        break;
    case '/':
        if (y == 0) {
            printf("Деление на ноль невозможно\n");
        }
        else {
            printf("=%.4f\n", x / y);
        }
        break;
    case '^':
        printf("=%.4f\n", pow(x, y));
        break;
    default:
        printf("Нет такого варианта\n");
        break;
    }

    return 0;
}

//3
int task3()
{
    int n;

    printf("Введите число от 1 до 13: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("один\n");
        break;
    case 2:
        printf("два\n");
        break;
    case 3:
        printf("три\n");
        break;
    case 4:
        printf("четыре\n");
        break;
    case 5:
        printf("пять\n");
        break;
    case 6:
        printf("шесть\n");
        break;
    case 7:
        printf("семь\n");
        break;
    case 8:
        printf("восемь\n");
        break;
    case 9:
        printf("девять\n");
        break;
    case 10:
        printf("десять\n");
        break;
    case 11:
        printf("одиннадцать\n");
        break;
    case 12:
        printf("двенадцать\n");
        break;
    case 13:
        printf("тринадцать\n");
        break;

    default:
        printf("Введите число от 1 до 13.\n");
        break;
    }

    return 0;
}
