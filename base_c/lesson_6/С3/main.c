#include <stdio.h>
#include <locale.h>

int middle(int a, int b)
{
    int result;

    result = (a + b) / 2;

    return result;
}

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", middle(a, b));

    return 0;
}