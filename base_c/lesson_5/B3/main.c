#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");
    
    int a, b, summ = 0;
    
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++)
    {
        summ += i * i;
    }

    printf("%d\n", summ);
    
    return 0;
}