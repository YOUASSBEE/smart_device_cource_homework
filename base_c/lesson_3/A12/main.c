#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int num, dig_summ;

    printf("Введите целое положительное трехзначное число:\n");
    scanf("%d", &num);

    dig_summ = num % 10 + (num / 10) % 10 + (num / 100) % 10;;

    printf("%d\n", dig_summ);

    return 0;
}