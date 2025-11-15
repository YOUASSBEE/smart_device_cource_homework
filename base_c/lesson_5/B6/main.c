#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    int hasDuplicate = 0;
    int lastDigit = -1;
    
    while (a > 0) {
        int currentDigit = a % 10;
        
        if (currentDigit == lastDigit) {
            hasDuplicate = 1;
            break;
        }
        
        lastDigit = currentDigit;
        a = a / 10;
    }
    
    if (hasDuplicate) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}