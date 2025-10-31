#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, d, e, smallest_num;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a <= b && a <= c && a <= d && a <= e)
    {
        smallest_num = a;
    }

    else if (b <= a && b <= c && b <= d && b <= e) 
    {
        smallest_num = b;
    } 
    
    else if (c <= a && c <= b && c <= d && c <= e)
    {
        smallest_num = c;
    }

    else if (d <= a && d <= b && d <= c && d <= e)
    {
        smallest_num = d;
    }

    else
    {
        smallest_num = e;
    }

    printf("%d\n", smallest_num);

    return 0;
}