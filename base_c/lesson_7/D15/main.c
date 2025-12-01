#include <stdio.h>
#include <locale.h>

int max_find(int current_max)
{
    int num;
    scanf("%d", &num);
    
    if (num == 0) {
        return current_max;
    }
    
    if (num > current_max) {
        current_max = num;
    }

    return max_find(current_max);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);

    if (num == 0)
    {
        return 0;
    }

    printf("%d\n", max_find(num));
}