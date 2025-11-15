#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    int hasDivideByTwo = 0;
    
    while (a > 0) {
        int digit = a % 10;
        if (digit % 2) {
            hasDivideByTwo += 1;
            break;
        }
        a = a / 10;
    }
    
    if (hasDivideByTwo) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}