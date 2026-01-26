#include <stdio.h>
#include <stdint.h>
#include <locale.h>

int main()
{
    // Установить правильную кодировку для отображения в консоли Windows
    setlocale(LC_ALL, "en_US.UTF-8");

    int32_t N;
    int32_t x;
    int32_t max;
    int32_t count = 0;

    scanf("%d", &N);

    for (int32_t i = 0; i < N; i++)
    {
        scanf("%d", &x);

        if (i == 0)
        {
            max = x;
            count = 1;
        }
        else if (x > max)
        {
            max = x;
            count = 1;
        }
        else if (x == max)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}