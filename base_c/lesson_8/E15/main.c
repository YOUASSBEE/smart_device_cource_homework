#include <stdio.h>
#include <locale.h>

int main()
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    #define ARRNUMBER 10
    int sizeOfArr = ARRNUMBER;
    long numArray[ARRNUMBER] = {0};
    long negativeArray[ARRNUMBER] = {0};
    long positiveArray[ARRNUMBER] = {0};
    int positiveCount = 0;
    int negativeCount = 0;
    int resultCount = 0;

    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%ld", &numArray[i]);
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (numArray[i] < 0)
        {
            negativeArray[negativeCount] = numArray[i];
            negativeCount += 1;
        }

        else if (numArray[i] > 0)
        {
            positiveArray[positiveCount] = numArray[i];
            positiveCount += 1;
        }
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (positiveArray[i] != 0)
        {
            numArray[resultCount] = positiveArray[i];
            resultCount += 1;
            
        }
    }

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (negativeArray[i] != 0)
        {
            numArray[resultCount] = negativeArray[i];
            resultCount += 1;
            
        }
    }

    for (int i = 0; i < resultCount; i++)
    {
        printf("%ld ", numArray[i]);
    }

    return 0;
    }