#include <stdio.h>
#include <locale.h>

long long factorial(int a) 
{
    long long result = 1;
    
    if (a == 0 || a == 1) 
    {
        return 1;
    }
    
    else 
    {
        for (int i = 2; i <= a; i++) 
        {
            result *= i;
        }
    }
    
    return result;
}

int main() 
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    printf("%lld\n", factorial(a));
    
    return 0;
}