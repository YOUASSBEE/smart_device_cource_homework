#include <stdio.h>
#include <locale.h>

unsigned int summFromOneToN(unsigned int i)
{
    if (i == 0) 
    {
        return 0;
    }
        return i + summFromOneToN(i - 1);  
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    unsigned int n;
    
    scanf("%u", &n);
    
    printf("%u ", summFromOneToN(n)); 

    return 0;
}