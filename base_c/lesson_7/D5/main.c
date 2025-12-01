#include <stdio.h>
#include <locale.h>

unsigned int decToBinary(unsigned int num)
{
    if (num == 0)
    {
        return 0;
    }
    
    return (num % 2) + (10 * decToBinary(num / 2));

}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    unsigned int num;
    
    scanf("%u", &num);

    printf("%u", decToBinary(num));
    
    return 0;
}