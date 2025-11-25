#include <stdio.h>
#include <locale.h>

int nod(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int a, b;

    scanf("%d %d", &a, &b);
    
    printf("%d\n", nod(a, b));
    return 0;
}