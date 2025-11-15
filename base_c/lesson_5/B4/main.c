#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);
    
    if (a >= 100 && a <= 999) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    return 0;
}