#include <stdio.h>
#include <locale.h>

void fromAToB(int a, int b)
{
    if (a == b)
    {
        printf("%d", a);
        return;
    }
    
    if (a < b)
    {
        printf("%d ", a);
        fromAToB(a + 1, b);
    }

    else
    {
        printf("%d ", a);
        fromAToB(a - 1, b);
    }
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int numA;
    int numB;

    scanf("%d %d", &numA, &numB);
    
    fromAToB(numA, numB);

    return 0;
}