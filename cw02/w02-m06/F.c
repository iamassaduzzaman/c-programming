// F. Multiplication table
// sheet 2

#include <stdio.h>

int main()
{
  int i, n;
  scanf("%d", &n);

  for (i = 1; i <= 12; i++)
  {
    printf("%d * %d = %d\n", n, i, i * n);
  }

  return 0;
}
