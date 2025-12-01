#include <stdio.h>
#include <locale.h>

int recurs_power(int n, int p)
{
    if (p == 0) {
        return 1;
    }
    
    return n * recurs_power(n, p - 1);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int n;
    int p;

    scanf("%d %d", &n, &p);
    
    printf("%d\n", recurs_power(n, p));
    
    return 0;
}