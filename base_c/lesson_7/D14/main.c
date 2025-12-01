#include <stdio.h>
#include <locale.h>

void printOdd() {

    int num;
    scanf("%d", &num);
    
    if (num == 0)
    {
        return;
    }
    
    if (num % 2 != 0)
    {
        printf("%d ", num);
    }
    
    printOdd();
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    printOdd();
    
    return 0;
}