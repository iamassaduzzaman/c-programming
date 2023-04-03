#include <stdio.h>

int main()
{
    // read one integer number
    int number;
    scanf("%d", &number);

    // check if the number is positive, negative or zero
    if ( 0 > number)
    {
        printf("negative\n");
    }
    else if ( 0 == number)
    {
        printf("zero\n");
    }
    else 
    {
        printf("positive\n");
    }
   

    return 0;
}