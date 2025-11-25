#include <stdio.h>
#include <locale.h>

void isEven(int x) 
{
    int result = 0;

    while (x > 0) {
        int temp = 0;

        temp = x % 2;
        result += temp;
        x = x / 10;
    
    }

    if (result % 2) {
      printf("NO");
    }

    else {
      printf("YES");
    }
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    int x;
    
    scanf("%d", &x);
    
    isEven(x);
    
    return 0;
}