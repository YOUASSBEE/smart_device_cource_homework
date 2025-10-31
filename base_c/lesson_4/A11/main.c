#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, d, e, smallest_num, biggest_num, summ;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a < b && a < c && a < d && a < e)
    {
        smallest_num = a;
    }

    else if (b < a && b < c && b < d && b < e) 
    {
        smallest_num = b;
    } 
    
    else if (c < a && c < b && c < d && c < e)
    {
        smallest_num = c;
    }

    else if (d < a && d < b && d < c && d < e)
    {
        smallest_num = d;
    }

    else
    {
        smallest_num = e;
    }


    if (a > b && a > c && a > d && a > e)
    {
        biggest_num = a;
    }

    else if (b > a && b > c && b > d && b > e) 
    {
        biggest_num = b;
    } 
    
    else if (c > a && c > b && c > d && c > e)
    {
        biggest_num = c;
    }

    else if (d > a && d > b && d > c && d > e)
    {
        biggest_num = d;
    }

    else
    {
        biggest_num = e;
    }

    summ = smallest_num + biggest_num;

    printf("%d\n", summ);

    return 0;
}