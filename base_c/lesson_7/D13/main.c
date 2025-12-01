#include <stdio.h>
#include <locale.h>

void primeMultDigit(int n, int div) {
    if (n == 1)
    {
        return;
    }
    
    if (n % div == 0)
    {
        printf("%d ", div);
        primeMultDigit(n / div, div);
    }

    else
    {
        primeMultDigit(n, div + 1);
    }
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    primeMultDigit(num, 2);
    
    return 0;
}