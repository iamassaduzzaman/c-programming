#include <stdio.h>

// count odd numbers
int countOdd(int *a, int s)
{
  int odd = 0;
  for (int i = 0; i < s; i++)
  {
    if (a[i] % 2 != 0)
    {
      odd++;
    }
  }

  return odd;
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int val = countOdd(a, n);

  printf("%d\n", val);

  return 0;
}