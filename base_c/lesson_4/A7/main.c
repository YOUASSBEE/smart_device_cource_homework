#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, first_num, second_num;

    scanf("%d %d", &a, &b);

    first_num = a > b ? b : a;
    second_num = b > a ? b : a;

    printf("%d %d\n", first_num, second_num);

    return 0;
}