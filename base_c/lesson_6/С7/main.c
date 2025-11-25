#include <stdio.h>
#include <locale.h>

int convertToBase(int n, int p) {
    int result = 0;
    int multiplier = 1;
    
    if (n == 0) {
        return 0;
    }
    
    while (n > 0) {
        int remainder = n % p;
        result += remainder * multiplier;
        multiplier *= 10;
        n /= p;
    }
    
    return result;
}

int main() {
    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int n, p;
    
    scanf("%d %d", &n, &p);
    
    printf("%d\n", convertToBase(n, p));
    
    return 0;
}