#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, d, e, biggest_num;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a >= b && a >= c && a >= d && a >= e)
    {
        biggest_num = a;
    }

    else if (b >= a && b >= c && b >= d && b >= e) 
    {
        biggest_num = b;
    } 
    
    else if (c >= a && c >= b && c >= d && c >= e)
    {
        biggest_num = c;
    }

    else if (d >= a && d >= b && d >= c && d >= e)
    {
        biggest_num = d;
    }

    else if (e >= a && e >= b && e >= c && e >= d)
    {
        biggest_num = e;
    }

    printf("%d\n", biggest_num);

    return 0;
}