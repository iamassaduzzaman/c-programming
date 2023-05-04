#include <stdio.h>

// swap the value
void swap_it(int *x, int *y)
{
  // dereferencing the value by *
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  swap_it(&a, &b);
  printf("%d %d", a, b);
  return 0;
}