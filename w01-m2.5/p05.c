#include <stdio.h>

int main()
{
    // read the amount as a integer number
    int taka;
    scanf("%d", &taka);

    if (taka >= 10000) // check whether she is going to buy Gucci Bag
    {
        printf("Gucci Bag\n");
        if (taka > 20000) // check whether she is going to buy Gucci Belt
        {
            printf("Gucci Belt\n");
        }
    }
    else if (taka >= 5000) // check whether she is going to buy Levis Bag
    {
        printf("Levis Bag\n");
    }
    else // otherwise she will buy something from new market
    {
        printf("Something\n");
    }

    return 0;
}