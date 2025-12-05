#include <stdio.h>
#include <locale.h>

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int numArray[10] = {0};
    int minNumber = 127;
    int maxNumber = -128;
    int minCount = 0;
    int maxCount = 0;
    

    int sizeOfArr = (sizeof(numArray)/sizeof(numArray[0]));

    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%d", &numArray[i]);
        if (numArray[i] < minNumber )
        {
            minNumber = numArray[i];
            minCount = i+1;
        }
        if(numArray[i] > maxNumber )
        {
            maxNumber = numArray[i];
            maxCount = i+1;
        }
    }
    
    printf("%d %d %d %d\n", maxCount, maxNumber, minCount, minNumber);
    
    return 0;
}