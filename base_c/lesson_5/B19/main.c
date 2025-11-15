#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, currentDig;
    int sum = 0;

    scanf("%d", &a);
    
    while (a > 0 ) 
    {
        currentDig = a % 10;
        sum += currentDig;
        a = a / 10;

    }
    if (sum == 10) {
    printf("YES");
    }
    else {
    printf("NO");
    }
    return 0;
}