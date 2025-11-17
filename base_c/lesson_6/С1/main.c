#include <stdio.h>
#include <locale.h>

int absNum(int num)
{

if (num < 0) 
{
num *= -1;
return num;
}

else 
{
return num;
}

}

int main() {

    //setlocale(LC_ALL, "Rus");
    setlocale(LC_ALL,"en_US.UTF-8");

    int a;

    scanf("%d", &a);

    printf("%d", absNum(a));

    return 0;
}