#include <stdio.h>
#include <stdint.h>
#include <locale.h>

int main()
{
    // Установить правильную кодировку для отображения в консоли Windows
    setlocale(LC_ALL, "en_US.UTF-8");

    uint32_t N;
    uint32_t count = 0;

    scanf("%u", &N);

    while (N)
    {
        count += N & 1;
        N >>= 1;
    }

    printf("%d\n", count);

    return 0;
}