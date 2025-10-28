#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, summ, mult;

    printf("Введите первое целое число:\n");
    scanf("%d", &a);

    printf("Введите второе целое число:\n");
    scanf("%d", &b);
    
    printf("Введите третье целое число:\n");
    scanf("%d", &c);    

    summ = a + b +c;

    mult = a * b * c;

    printf("a+b+c=%d\n", summ);
    printf("a*b*c=%d", mult);

    return 0;
}