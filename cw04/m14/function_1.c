// return + parameter

#include <stdio.h>

// function declaration
int ddl(int x);

// main function
int main()
{
  // function call
  int dValue = ddl(10);

  printf("%d\n", dValue);
  return 0;
}

// funciton defination
int ddl(int x)
{
  int dValue = x * 2;
  return dValue;
}