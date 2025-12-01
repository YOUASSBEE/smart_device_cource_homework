#include <stdio.h>
#include <locale.h>

unsigned int fromOneToN(unsigned int i)
{
    if (i > 0) {
        fromOneToN(i - 1);
        printf("%u ", i); 
    }
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    unsigned int n;

    scanf("%u", &n);

    fromOneToN(n);

    return 0;
}