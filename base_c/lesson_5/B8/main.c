#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    int digitCount[10] = {0};
    int hasDuplicate = 0;
    
    if (a == 0)
    {
        hasDuplicate = 1;
    }
    
    while (a > 0) {
        int digit = a % 10;
        digitCount[digit]++;
        
        if (digitCount[9] > 1) {
            hasDuplicate = 1;
            break;
        }
        
        a = a / 10;
    }
    
    if (hasDuplicate) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}