#include <stdio.h>
#include <locale.h>

void check_brackets() {
    char c;
    int balance = 0;
    
    scanf("%c", &c);
    while (c != '.') {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) break;
        }
        scanf("%c", &c);
    }
    
    printf(balance == 0 ? "YES\n" : "NO\n");
}

int main() 
{
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");
    
    check_brackets();
    
    return 0;
}