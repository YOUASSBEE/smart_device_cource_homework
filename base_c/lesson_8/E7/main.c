#include <stdio.h>
#include <locale.h>

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int numArray[10] = {0};

    int sizeOfArr = 10;

    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%d", &numArray[i]);
    }

    for (int i = 0; i < (sizeOfArr / 2) / 2; i++)
    {
        int temp = numArray[i];
        numArray[i] = numArray[4 - i];
        numArray[4 - i] = temp;
    }

    for (int i = 0; i < (sizeOfArr / 2) / 2; i++)
    {
        int temp = numArray[5 + i];
        numArray[5 + i] = numArray[9 - i];
        numArray[9 - i] = temp;
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("%d ", numArray[i]);
    }
    
    return 0;
}