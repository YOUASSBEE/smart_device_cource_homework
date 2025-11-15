#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    int countEven = 0;
    
    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }

        if ((a > 0) && (a % 2 == 0))
        {
            countEven ++;
        }
        
    }
    
    printf("%d\n", countEven);

    return 0;
}