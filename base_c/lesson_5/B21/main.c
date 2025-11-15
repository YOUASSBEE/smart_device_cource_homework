#include <stdio.h>
#include <locale.h>

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    char a;
    char lowercase = 0;

    while (a != '.') 
    {
        scanf("%c", &a);
        if (a != '.') 
        {
            if (a >= 'A' && a <= 'Z') 
            {
                lowercase = a + 32;
            } 
            else 
            {
                lowercase = a;
            }
            printf("%c", lowercase);
        }
    }
    return 0;
}