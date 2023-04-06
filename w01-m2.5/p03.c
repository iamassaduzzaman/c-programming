#include <stdio.h>

int main()
{
    // read one integer number
    int a;
    scanf("%d", &a);

    // check whether the number is even or odd
    if(a % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    
    return 0;
}
