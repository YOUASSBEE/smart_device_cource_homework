#include <stdio.h>
#include <math.h>
#include <locale.h>

float sinus(float x) {
    
    #define PI 3.14159265358979323846 // Зададим явно число пи

    float x_rad = x * PI / 180.0f; // Переводим градусы в радианы
    float result = 0.0F;
    float term = x_rad;  // первый член ряда: x
    int n = 1;           // текущий нечетный показатель степени
    int sign = 1;        // знак текущего члена
    
    // Суммируем члены ряда пока они больше точности 0.001
    while (fabs(term) >= 0.001f) {
        result += sign * term;
        n += 2; // Переходим к следующему члену ряда
        sign = -sign;  // меняем знак
        term = term * x_rad * x_rad / ((n - 1) * n);  // Вычисляем x^n/n!
    }
    
    return result;
}

int main() {
    //setlocale(LC_ALL, "Rus");    
    setlocale(LC_ALL, "en_US.UTF-8");

    float x;
    
    scanf("%f", &x);
    
    printf("%.3f\n", sinus(x));
    
    return 0;
}