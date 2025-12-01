#include <stdio.h>
#include <locale.h>

void reverseDigit(unsigned int i)
{
    if (i == 0) 
    {
        return;
    }
    else
    {
        printf("%u ", (i % 10));
        reverseDigit(i / 10);
    }
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    unsigned int n;
    
    scanf("%u", &n);
    
    if (n == 0) 
    {
        printf("0");
    }
    else 
    {
        reverseDigit(n);
    }

    return 0;
}