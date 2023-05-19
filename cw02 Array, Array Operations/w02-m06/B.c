// B. even numbers sheet 2(loops)
#include <stdio.h>

int main()
{
  int i, N;
  scanf("%d", &N);

  if (N == 1)
  {
    printf("-1\n");
  }

  for (i = 1; i <= N; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
