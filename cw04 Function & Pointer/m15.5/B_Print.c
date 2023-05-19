#include <stdio.h>

// print 1 to N
void show(int x)
{
  for (int i = 1; i <= x; i++)
  {
    if (i < x)
    {
      printf("%d ", i);
    }
    else
    {
      printf("%d", i);
    }
  }
}

int main()
{
  int x;
  scanf("%d", &x);
  show(x);
  return 0;
}