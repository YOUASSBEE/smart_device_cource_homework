#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c;
    double avg;

    scanf("%d %d %d", &a, &b, &c);

    avg = ((double)a + (double)b +(double)c)/3;

    printf("%.2f\n", avg);

    return 0;
}