#include <stdio.h>

int main()
{

  /* 
  do/while: This loop will execute the code block once, 
  before checking if the condition is true, 
  then it will repeat the loop as long as the condition is true.
  */

 // if the condition is true then it will run again otherwise not

  int n;
  do
  {
    scanf("%d", &n); // executing the code before checking the condition
  }
  while(n < 1); // checking the condition after executing at lest once

  printf("%d\n", n);
}