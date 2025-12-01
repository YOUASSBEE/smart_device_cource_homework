#include <stdio.h>
#include <locale.h>

int is_prime(int n, int delitel)
{
    if (n <= 1)
    {
        return 0;
    }

    if (delitel * delitel > n)
    {
        return 1;
    }

    if (n % delitel == 0)
    {
        return 0;
    }

    return is_prime(n, delitel + 1);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    if (is_prime(num, 2))
    {
        printf("YES\n");
    } 

    else
    {
        printf("NO\n");
    }
    
    return 0;
}