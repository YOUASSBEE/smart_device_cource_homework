#include <stdio.h>
#include <math.h>
#include <locale.h>

int is_prime(int n)
{
    int isPrime = 1;

    if (n <= 1) 
    {
    isPrime = 0;
    }
    else 
    {
        for (int i = 2; i <= sqrt(n); i++) 
        {
            if (n % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime) 
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int x;
    
    scanf("%d", &x);
    
    is_prime(x);
    
    return 0;
}