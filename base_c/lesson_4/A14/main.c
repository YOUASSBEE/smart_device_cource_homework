#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a, first_dig, second_dig, third_dig, biggest_dig;

    scanf("%d", &a);

    first_dig = a / 100;
    second_dig = (a - (first_dig * 100)) / 10;
    third_dig = a - ((first_dig * 100) + (second_dig * 10));

    if (first_dig > second_dig && first_dig > third_dig)
    {
        biggest_dig = first_dig;
    }
    else if (second_dig > first_dig && second_dig > third_dig)
    {
        biggest_dig = second_dig;
    }
    else
    {
        biggest_dig = third_dig;
    }
    
    printf("%d\n", biggest_dig);

    return 0;
}