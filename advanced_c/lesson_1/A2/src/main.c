#include <stdio.h>
#include <stdint.h>
#include <locale.h>

int main()
{
    // Установить правильную кодировку для отображения в консоли Windows
    setlocale(LC_ALL, "en_US.UTF-8");

    uint32_t N;
    uint32_t shift;
    uint32_t res;

    scanf("%u %d", &N, &shift);

    res = (N >> shift) | (N << (32 - shift));

    printf("%u\n", res);

    return 0;
}