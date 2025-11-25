#include <stdio.h>
#include <locale.h>

int is_digit(char c)
{
    int hasDigit = 0;
    
    // Обрабатываем первый символ, который уже считан в main
    if (c != '.' && c >= '0' && c <= '9') {
        hasDigit += 1;
    }
    
    // Читаем остальные символы до точки
    while (c != '.') {
        scanf("%c", &c);
        if (c != '.' && c >= '0' && c <= '9') {
            hasDigit += 1;
        }
    }
    
    return hasDigit;
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    char x;
    
    scanf("%c", &x);
    
    printf("%d", is_digit(x));
    
    return 0;
}