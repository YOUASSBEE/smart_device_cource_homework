#include <stdio.h>
#include <locale.h>

void printSequence(int current_num, int repeat_count, int printed, int n)
{
    if (printed >= n)
    {
        return;
    }
    
    printf("%d ", current_num);
    printed++;
    
    if (repeat_count == current_num)
    {
        printSequence(current_num + 1, 1, printed, n);
    }

    else
    {
        printSequence(current_num, repeat_count + 1, printed, n);
    }
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    printSequence(1, 1, 0, num);
    
    return 0;
}