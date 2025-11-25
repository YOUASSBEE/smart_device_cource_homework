#include <stdio.h>
#include <locale.h>

int is_happy_number(int n)
{
    int temp = 0;
    int summ = 0;
    int diff = 1;

    while (n > 0) 
    {
        temp = n % 10;
    
        summ += temp;
        diff *= temp;
    
        n = n / 10;
    }

    if (summ == diff) {
        printf("YES");
    }
    else {
        printf("NO");
    }
return 0;
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int x;
    
    scanf("%d", &x);
    
    is_happy_number(x);
    
    return 0;
}