#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    int countDigit = 0;
    
    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }
        
        countDigit ++;
    }
    
    printf("%d\n", countDigit);

    return 0;
}