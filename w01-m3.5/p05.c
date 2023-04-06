#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // read a positive integer from user
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
      if(i % 5 == 0) // check if the number is divisible by 5
      {
        printf("%d Yes\n", i);
      }
      else
      {
        printf("%d No\n", i);
      }
    }    
    return 0;
}