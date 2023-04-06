#include <stdio.h>

int main()
{
    // read two integer form user
    int a, b;
    scanf("%d %d", &a, &b);

    // evalute summation, subtraction, multiplication, division
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    
    // to get floating point output we need to convert integer into floating point 
    // printf("%d / %d = %.2f\n", a, b, a*1.0 / b); // by multiplying with 1.0
    printf("%d / %d = %.2f\n", a, b, (float) a / (float) b); // explicit type casting 
    return 0;
}
