#include <stdio.h>
#include <locale.h>

int summ(int x) 
{
    int result = 0;
    for (int i = x; i > 0; i--) 
    {
        result += i;
    }
    return result;
}

int main() 
{
    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int x;

    scanf("%d", &x);

    printf("%d\n", summ(x));
    
    return 0;
}