// no return + parameter

#include <stdio.h>

// function declaration
void sum(int x, int y);

// main function
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  sum(a, b);
  return 0;
}

// function definition
void sum(int x, int y)
{
  int val = x + y;
  printf("%d\n", val);
  return;
}