#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, b, c, biggest_num;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        biggest_num = a;
    } else if (b >= a && b >= c) {
        biggest_num = b;
    } else {
        biggest_num = c;
    }

    printf("%d\n", biggest_num);

    return 0;
}