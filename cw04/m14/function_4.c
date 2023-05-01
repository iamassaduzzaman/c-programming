// no return + no parameter

#include <stdio.h>

// function declaration
void sum(void);

// main function
int main()
{
  sum();
  return 0;
}

// function defination
void sum(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b);
}