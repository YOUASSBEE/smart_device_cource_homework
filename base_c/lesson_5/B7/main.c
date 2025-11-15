#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    int digitCount[10] = {0};
    int hasDuplicate = 0;
    
    while (a > 0) {
        int digit = a % 10;
        digitCount[digit]++;
        
        if (digitCount[digit] > 1) {
            hasDuplicate = 1;
            break;
        }
        
        a = a / 10;
    }
    
    if (hasDuplicate) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}