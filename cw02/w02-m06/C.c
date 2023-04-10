// C. Even, Odd, Positive and Negative
// sheet 2
#include <stdio.h>

int main()
{
  int i, N, K, even = 0, odd = 0, positive = 0, negative = 0;
  scanf("%d", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%d", &K);
    if (K % 2 == 0)
    {
      even++;
    }
    if (K % 2 != 0)
    {
      odd++;
    }
    if (K > 0)
    {
      positive++;
    }
    if (K < 0)
    {
      negative++;
    }
  }

  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);
  return 0;
}
