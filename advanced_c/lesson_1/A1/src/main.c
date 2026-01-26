#include <stdio.h>
#include <stdint.h>
#include <locale.h>

int main()
{
    // Установить правильную кодировку для отображения в консоли Windows
    setlocale(LC_ALL, "en_US.UTF-8");

    int32_t N;
    char c;

    scanf("%d", &N);

    // читаем символы до точки
    while ((c = getchar()) != '.')
    {
        if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + N) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + N) % 26 + 'A';
        }
        // пробел и другие допустимые символы не меняем
        putchar(c);
    }

    putchar('.');

    return 0;
}