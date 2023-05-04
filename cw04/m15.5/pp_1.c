#include <stdio.h>
#include <stdlib.h>

// return absoulte value
int my_abs(int x)
{
  int val = abs(x);
  return val;
}

int main()
{
  int x;
  scanf("%d", &x);

  int val = my_abs(x);
  printf("%d\n", val);
  return 0;
}