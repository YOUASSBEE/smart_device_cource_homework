#include <stdio.h>
#include <locale.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a = 1, b = 1;

    printf("1 ");
    
    for (int i = 2; i <= n; i++) {
        printf("%d ", b);
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}