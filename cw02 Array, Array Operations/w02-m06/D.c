// D. Fixed Password (EOF)
// sheet 2
#include <stdio.h>

int main()
{
  int a;
  while (scanf("%d", &a) != EOF)
  {
    if (a == 1999)
    {
      printf("Correct\n");
      break;
    }
    else
    {
      printf("Wrong\n");
    }
  }
}
