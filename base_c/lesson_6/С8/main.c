#include <stdio.h>
#include <locale.h>

char convertToUppercase(char a) {
    char uppercase = a;
    
    if (a >= 'a' && a <= 'z') {
        uppercase = a - 32;
    }
    
    return uppercase;
}

int main() {
    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL, "en_US.UTF-8");
    
    char a;
    
    scanf("%c", &a);
    
    while (a != '.') {
        printf("%c", convertToUppercase(a));
        scanf("%c", &a);
    }
    
    return 0;
}
