#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "en_US.UTF-8");

    int num;
    int mostestNum = -1;
    int leastestNum = 10;

    scanf("%d", &num);
    
    while (num > 0) 
    {
        int currentDigit = num % 10;

        if (currentDigit > mostestNum)
        {
            mostestNum = currentDigit;
        }
        if (currentDigit < leastestNum)
        {
            leastestNum = currentDigit;
        }
            
            num = num / 10;
    }

printf("%d %d\n", leastestNum, mostestNum);

return 0;

}