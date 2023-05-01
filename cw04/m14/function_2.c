// retunr_type + no parameter

#include <stdio.h>

// function declaration
int sum();

// main function
int main()
{

  // if we declare a function parameter void and
  // give a argument in fuction call it will give us
  // error. but if we don't declare it void and give
  // argument then it would run without any error
  int s = sum();
  printf("%d\n", s);
  return 0;
}

// function defination
int sum()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int s = a + b;
  return s;
}