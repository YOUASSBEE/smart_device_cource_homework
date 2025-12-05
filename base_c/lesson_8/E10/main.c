#include <stdio.h>
#include <locale.h>

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    #define ARRNUMBER 12
    
    int numArray[ARRNUMBER] = {0};
    int tempArray[ARRNUMBER] = {0};
    int sizeOfArr = ARRNUMBER;

    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%d", &numArray[i]);
    }

    for (int i = 0, j = 4; i < 9, j < 12; i++, j++)
    {
            tempArray[j] = numArray[i];
    }

    for (int i = 0, j = 8; i < 4, j < 12; i++, j++)
    {
            tempArray[i] = numArray[j];
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        numArray[i] = tempArray[i];
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("%d ", numArray[i]);
    }
    
    return 0;
}