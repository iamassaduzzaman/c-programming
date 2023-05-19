#include <stdio.h>

int main()
{
  int x = 5;
  printf("x address = %p\n", &x);

  int *p = &x; // *p is a pointer variable
               // p = 20; // doesn't change the value of x instead show segmentation fault
               // *p = 20;     // change the x value
  printf("x address with pointer = %p\n", p);
  printf("x value with pointer = %d\n", *p);

  // %p return hexadecimal address
  // %d return decimal address
  // p (identifier) gives us address
  // *p (identifier) gives us value
  return 0;
}