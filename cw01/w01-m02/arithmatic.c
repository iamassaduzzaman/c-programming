#include <stdio.h>

int main()
{
  // if the first number is smaller in this case 25 than the number
  // after modules then value would be small number
  // modules operation only for integer
  // sign would be according to the first oparand
  int c = 25 % 75; 

  // if the first number is greater than the number after
  // moduler then value would be reaminder
  int d = 20 % 5;

  printf("%d\n", d);
  return 0;
}

// practice
// 7 % 1 = 0
// -7 % 3 = -1 first oparand is negative
// 4 % -7 = 4  first oparand is positive
// 7 % 4 = 3