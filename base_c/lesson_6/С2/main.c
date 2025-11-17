#include <stdio.h>
#include <locale.h>

int power(int num, int pwr)
{
    int result = 1;
    for (int i = pwr; i > 0; i--) 
    {
        result *= num;
    }

    return result;
}

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", power(a, b));

    return 0;
}