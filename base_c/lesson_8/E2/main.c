#include <stdio.h>
#include <locale.h>

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int numArray[5] = {0};
    int minimal = 127;
    

    int sizeOfArr = (sizeof(numArray)/sizeof(numArray[0]));

    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%d", &numArray[i]);
        if (numArray[i] < minimal )
        {
            minimal = numArray[i];
        }
    }
    
    printf("%d\n", minimal);
    
    return 0;
}