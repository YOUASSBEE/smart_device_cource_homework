#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, sqrt;

    scanf("%d %d", &a, &b);
    
for (int i = a; i <= b; i++)
{
    sqrt = i * i;
    printf("%d ", sqrt);
}
    return 0;
}