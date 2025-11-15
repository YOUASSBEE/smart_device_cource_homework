#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    int a;
    scanf("%d", &a);
    
    int lastDigit = 10;
    int isIncreasing = 1;
    
    while (a > 0) {
        int currentDigit = a % 10;
        
        if (currentDigit >= lastDigit) {
            isIncreasing = 0;
            break;
        }
        
        lastDigit = currentDigit;
        a = a / 10;
    }
    
    if (isIncreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}