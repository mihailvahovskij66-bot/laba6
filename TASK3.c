#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int N;
    printf("Введите число N (меньше 1000): ");
    scanf("%d", &N);
    if (N % 10 == 5 || (N / 10) % 10 == 5 || (N / 100) % 10 == 5) 
    {
        printf("Да, цифра 5 входит в число.\n");
    }
    else {
        printf("Нет, цифры 5 в числе нет.\n");
    }
    return 0;
}