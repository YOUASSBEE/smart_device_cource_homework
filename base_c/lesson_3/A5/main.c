#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c;
    double avg;

    printf("Введите первое целое число:\n");
    scanf("%d", &a);

    printf("Введите второе целое число:\n");
    scanf("%d", &b);
    
    printf("Введите третье целое число:\n");
    scanf("%d", &c);    

    avg = (a + b +c)/3;

    printf("%.2f\n", avg);

    return 0;
}