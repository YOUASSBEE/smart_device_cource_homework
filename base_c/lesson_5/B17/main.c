#include <stdio.h>
#include <locale.h>

int main() {
    int a;
    scanf("%d", &a);
    
    for (int num = 10; num <= a; num++) {
        int temp = num;
        int sum = 0;
        int product = 1;
        
        while (temp > 0) {
            int digit = temp % 10;
            
            sum += digit;
            product *= digit;
            temp /= 10;
        }
        
        if (sum == product) {
            printf("%d ", num);
        }
    }
    
    return 0;
}