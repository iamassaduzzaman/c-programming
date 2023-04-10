#include <stdio.h>

int main()
{
  char ch;
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z')
  {
    int capital = ch - 32;
    printf("%c", capital);
  }
  else
  {
    int small = ch + 32;
    printf("%c", small);
  }
  return 0;
}