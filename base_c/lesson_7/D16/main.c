#include <stdio.h>
#include <locale.h>

int is2pow(int n)
{

    if (n == 1) {
        return 1;
    }
    
    if (n < 1 || n % 2 != 0) {
        return 0;
    }
    
    return is2pow(n / 2);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;

    scanf("%d", &num);
    
    if (is2pow(num))
    {
        printf("YES\n");
    } 

    else
    {
        printf("NO\n");
    }
    
    return 0;
}