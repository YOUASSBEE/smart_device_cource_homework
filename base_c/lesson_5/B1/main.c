#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, sqrt, cube;

    scanf("%d", &a);
    
for (int i = 1; i < a+1; i++)
{
    sqrt = i * i;
    cube = i * i * i;
    printf("%d %d %d\n", i, sqrt, cube);
}
    return 0;
}