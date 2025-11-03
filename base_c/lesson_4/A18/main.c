#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Above");
    }
    else if (a < b)
    {
        printf("Less");
    }
    else printf("Equal");
    
    return 0;
}