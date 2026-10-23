#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "");
    int years;
    printf("¬ведите год: ");
    scanf("%d", &years);
    int ostatok = years % 4;
    if ((ostatok == 0 && years % 100 != 0) || (years % 400 == 0)) {
        printf("год %d високосный\n", years);
    }
    else {
        printf("год %d не високосный\n", years);
    }
    return 0;
}