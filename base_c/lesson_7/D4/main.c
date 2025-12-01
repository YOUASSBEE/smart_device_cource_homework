#include <stdio.h>
#include <locale.h>

void print_num(int n) {

    if (n < 10) 
    {
        printf("%d ", n);
        return;
    }
    
    print_num(n / 10);

    printf("%d ", n % 10);
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int num;
    scanf("%d", &num);
    
    // Особый случай для числа 0
    if (num == 0) {
        printf("0\n");
    } else {
        print_num(num);
        printf("\n");
    }
    
    return 0;
}