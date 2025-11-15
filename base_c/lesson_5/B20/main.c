#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, isPrime = 1;

    scanf("%d", &a);
    
    if (a <= 1) 
    {
    isPrime = 0;
    }
    else 
    {
        for (int i = 2; i <= sqrt(a); i++) 
        {
            if (a % i == 0) 
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

    return 0;
}