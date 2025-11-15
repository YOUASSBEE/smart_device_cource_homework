#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, summ = 0;

    scanf("%d", &a);
    
    int temp = a;
    while (temp > 0)
    {
        summ += temp % 10;
        temp /= 10;
    }

    printf("%d\n", summ);

    return 0;
}