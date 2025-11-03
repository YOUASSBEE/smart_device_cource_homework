#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a < b) && (a < c))
    {
        if ((b < c) && (b > a))
        {
            if ((c > a) && (c > b))
            printf("YES\n");
        }
    }
    else printf("NO\n");

    return 0;
}