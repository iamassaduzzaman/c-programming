/*
Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed
*/

#include <stdio.h>

int main()
{
  int time = 22;
  if (time < 10)
  {
    printf("Good morning.");
  }
  else if (time < 20)
  {
    printf("Good day.\n");
  }
  else
  {
    printf("Good evening.\n");
  }
  return 0;
}