#include <stdio.h>
#include <string.h>

// get the length of a string
int my_len(char *s)
{
  int len = strlen(s);
  return len;
}

int main()
{
  char a[100];
  scanf("%s", a);

  int len = my_len(a);

  printf("%d\n", len);

  return 0;
}