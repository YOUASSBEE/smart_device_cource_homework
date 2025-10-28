#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, summ, mult;

    scanf("%d %d %d", &a, &b, &c);

    summ = a + b +c;

    mult = a * b * c;

    printf("%d+%d+%d=%d\n", a, b, c, summ);
    printf("%d*%d*%d=%d", a, b, c, mult);

    return 0;
}