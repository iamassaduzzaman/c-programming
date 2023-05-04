#include <stdio.h>

// to get ascending order of given numbers
void ascending(int x, int y, int z)
{
  int min, mid, max;

  if (x >= y && x >= z)
  {
    max = x;
    if (y >= z)
    {
      mid = y;
      min = z;
    }
    else
    {
      mid = z;
      min = y;
    }
  }
  else if (y >= z && y >= x)
  {
    max = y;
    if (x >= z)
    {
      mid = x;
      min = z;
    }
    else
    {
      mid = z;
      min = x;
    }
  }
  else if (z >= y && z >= x)
  {
    max = z;
    if (x >= y)
    {
      mid = x;
      min = y;
    }
    else
    {
      mid = y;
      min = x;
    }
  }

  printf("%d\n%d\n%d\n\n", min, mid, max);
}

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  ascending(a, b, c);

  printf("%d\n%d\n%d\n", a, b, c);
  return 0;
}