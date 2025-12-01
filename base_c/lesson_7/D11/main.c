#include <stdio.h>
#include <locale.h>

int countOnes(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 2) + countOnes(n / 2);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    printf("%d\n", countOnes(num));
    
    return 0;
}