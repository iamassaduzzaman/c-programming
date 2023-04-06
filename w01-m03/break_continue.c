// break: it will through you out from the loop and swtich
// continue: it will ignore/skip rest of the statement and go to the next iteration

#include <stdio.h>

int main()
{
  int N = 10;
  for(int i = 1; i <= N; i++)
  {

     if(i == 5)
    {
      continue; // therefore 5 will not print or 5
    }

    if(i == 8)
    {
      break; // therfore loop will stop here
    }

    printf("%d\n", i);
  }

  return 0;
}