#include <stdio.h>
#include <locale.h>

void print_digits(int n)
{

    if (n < 10)
    {
        printf("%d", n);
        return;
    }
    
    print_digits(n / 10);
    printf(" %d", n % 10);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    print_digits(num);
    
    return 0;
}