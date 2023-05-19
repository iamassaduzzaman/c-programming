// E. Max
// sheet 2
#include <stdio.h>

int main()
{
  int i, n, k, max = 0;
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &k);
    if (k > max)
    {
      max = k;
    }
  }

  printf("%d\n", max);
}
