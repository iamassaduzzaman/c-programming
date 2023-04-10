#include <stdio.h>

int main()
{
  // read two integer
  int A, B;
  scanf("%d %d", &A, &B);

  // check whether those two are multiples or not
  if (A % B == 0 || B % A == 0)
    printf("Multiples\n");
  else
    printf("No Multiples\n");

  return 0;
}