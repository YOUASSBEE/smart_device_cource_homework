#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, currentDigit;

    int evenCount = 0;
    int oddCount = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        currentDigit = a % 10;
    
        if (!(currentDigit % 2))
        {
            evenCount += 1;
        }
        else (oddCount += 1);

        a = a / 10;
    }
    
    printf("%d %d\n", evenCount, oddCount);

    return 0;
}