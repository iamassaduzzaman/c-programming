#include <stdio.h>

int main()
{
  // read char
  char ch;
  scanf("%c", &ch);

  if (ch >= '0' && ch <= '9') // check whether it is digit
  {
    printf("IS DIGIT\n");
  }
  else // check whether it is Alpha
  {
    printf("ALPHA\n");
    if (ch >= 'A' && ch <= 'Z') // check whether capital
    {
      printf("IS CAPITAL");
    }
    else // otherwise small
    {
      printf("IS SMALL");
    }
  }
  return 0;
}