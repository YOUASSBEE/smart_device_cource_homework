#include <stdio.h>
#include <locale.h>

int sum_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10)+ sum_digits(n / 10);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    printf("%d", sum_digits(num));
    
    return 0;
}