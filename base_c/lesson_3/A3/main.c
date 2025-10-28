#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, summ;

    //printf("Введите три целых числа:\n");
    scanf("%d %d %d", &a, &b, &c);

    summ = a + b +c;

    printf("%d+%d+%d=%d", a, b, c, summ);
    return 0;
}