#include <stdio.h>
#include <locale.h>

unsigned long long chessCount(unsigned int num)
{
    unsigned long long result = 1;
    for (unsigned int i = num - 1; i > 0 ; i--) 
    {
        result *= 2;
    }
    return result;
}


int main() 
{
    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    unsigned int x;

    scanf("%u", &x);
    printf("%llu\n", chessCount(x));  
    
    return 0;
}