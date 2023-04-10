// Q. Digits
// sheet 2

#include <stdio.h>

int main()
{
  int i, t;
  scanf("%d", &t);

  for (i = 0; i < t; i++)
  {
    int a;
    scanf("%d", &a);

    do
    {
      printf("%d ", a % 10);
      a /= 10;
    } while (a != 0);
    printf("\n");
  }
}
