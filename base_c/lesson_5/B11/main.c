#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;
    int result = 0;
    scanf("%d", &num);
    
    while (num > 0) 
    {
        result = result * 10;
        result = result + num % 10;
        num = num / 10;
    }
    printf("%d", result);
    return 0;
}