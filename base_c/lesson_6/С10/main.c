#include <stdio.h>
#include <locale.h>

void print_simple(int n) 
{
    // Если ввели 1
    if (n == 1) {
        printf("1\n");
        return;
    }
    
    // Проверка делимости на 2
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }
    
    // Обработка нечетных делителей
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // Если осталось простое число больше 1
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int n;

    scanf("%d", &n);
    
    print_simple(n);

    return 0;
}
