#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int x1, y1, x2, y2;
    float K, B;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    K = ((float)y2 - (float)y1) / ((float)x2 - (float)x1);
    B = (float)y1 - K * (float)x1;

    printf("%.2f %.2f\n", K, B);

    return 0;
}