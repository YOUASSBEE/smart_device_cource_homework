#include <stdio.h>
#include <locale.h>

void printFromNToOne(unsigned int num)

{
    if (num == 0)
    {
        return;
    }
    printf("%u ", num);
    printFromNToOne(num -1);
}

int main()
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    unsigned int num;

    scanf("%u", &num);
    
    printFromNToOne(num);

    return 0;
}