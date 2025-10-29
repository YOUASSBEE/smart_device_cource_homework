#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, sub;

    scanf("%d %d", &a, &b);

    sub = a - b;

    printf("%d\n", sub);

    return 0;
}