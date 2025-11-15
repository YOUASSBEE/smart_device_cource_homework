#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b;

    scanf("%d %d", &a, &b);
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
        
    return 0;
}