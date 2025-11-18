#include <stdio.h>
#include <locale.h>

int calcFunc(int x) {
    if (x >= -2 && x < 2) {
        return x * x;
    } else if (x >= 2) {
        return x * x + 4 * x + 5;
    } else {
        return 4;
    }
}

int main() 
{

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int x;
    int max_value = -2147483647;
    
    while (1) 
    {
        scanf("%d", &x);
        
        if (x == 0) 
        {
            break;
        }
        
        int current = calcFunc(x);
        
        if (current > max_value) 
        {
            max_value = current;
        }
    }
    
    printf("%d\n", max_value);
    
    return 0;
}