#include <stdio.h>

int main()
{
  // read one integer
  int x;
  scanf("%d", &x);

  // take out the first digit
  do
  {
    x /= 10;
  } while (x >= 10);

  // check whether the first digit even or odd
  if (x % 2 == 0)
  {
    printf("EVEN\n");
  }
  else
  {
    printf("ODD\n");
  }

  return 0;
}