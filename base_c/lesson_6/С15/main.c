#include <stdio.h>
#include <locale.h>

int grow_up(int n)
{
    int lastDigit = 10;
    int isIncreasing = 1;
    
    while (n > 0) {
        int currentDigit = n % 10;
        
        if (currentDigit >= lastDigit) {
            isIncreasing = 0;
            break;
        }
        
        lastDigit = currentDigit;
        n = n / 10;
    }
    
    if (isIncreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int x;
    
    scanf("%d", &x);
    
    grow_up(x);
    
    return 0;
}