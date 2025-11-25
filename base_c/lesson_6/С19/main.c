#include <stdio.h>
#include <locale.h>

int digit_to_num(char c)
{
    int summ = 0;
    
    // Обрабатываем первый символ, который уже считан в main
    if (c != '.' && c >= '0' && c <= '9') {
        summ += c -'0';
    }
    
    // Читаем остальные символы до точки
    while (c != '.') {
        scanf("%c", &c);
        if (c != '.' && c >= '0' && c <= '9') {
            summ += c -'0';
        }
    }
    
    return summ;
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    char x;
    
    scanf("%c", &x);
    
    printf("%d", digit_to_num(x));
    
    return 0;
}