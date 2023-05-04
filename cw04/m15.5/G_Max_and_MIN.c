// #include <stdio.h>

// // to get min value
// int min(int *A, int s)
// {
//   for (int i = 0; i < s - 1; i++)
//   {
//     for (int j = i + 1; j < s; j++)
//     {
//       if (A[i] > A[j])
//       {
//         int temp = A[i];
//         A[i] = A[j];
//         A[j] = temp;
//       }
//     }
//   }

//   return A[0];
// }

// // to get max value
// int max(int *A, int s)
// {
//   for (int i = 0; i < s - 1; i++)
//   {
//     for (int j = i + 1; j < s; j++)
//     {
//       if (A[i] < A[j])
//       {
//         int temp = A[i];
//         A[i] = A[j];
//         A[j] = temp;
//       }
//     }
//   }

//   return A[0];
// }

// int main()
// {
//   int N;
//   scanf("%d", &N);

//   int A[N];
//   for (int i = 0; i < N; i++)
//   {
//     scanf("%d", &A[i]);
//   }

//   int minDigit = min(A, N);
//   int maxDigit = max(A, N);

//   printf("%d %d\n", minDigit, maxDigit);

//   return 0;
// }

#include <stdio.h>
#include <limits.h>
void max_min(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int max = INT_MIN, min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }

    if (a[i] < min)
    {
      min = a[i];
    }
  }
  printf("%d %d\n", min, max);
}
int main()
{
  max_min();
  return 0;
}