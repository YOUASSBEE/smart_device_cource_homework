#include <stdio.h>
#include <locale.h>

int main() {
    //setlocale(LC_ALL, "Rus");
 setlocale(LC_ALL,"en_US.UTF-8");
    printf("Hello world!\n");
    return 0;
}