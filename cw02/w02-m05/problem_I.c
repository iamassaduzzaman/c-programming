#include <stdio.h>

int main()
{
  // read two integer
  int A, B;
  scanf("%d %d", &A, &B);

  // check whether A is greater
  if (A >= B)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}