#include <stdio.h>
#include <locale.h>

int main() {
    //setlocale(LC_ALL, "Rus");
 setlocale(LC_ALL,"en_US.UTF-8");
    printf("Let's\n");
    printf("\tgo\n");
    printf("\t\tto walk\n");
    return 0;
}
