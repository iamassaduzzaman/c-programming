#include <stdio.h>

// global scope
int y = 5;

void testScope(void)
{
  // local scope
  int x = 5;
  printf("textScope address = %p\n", &x);

  // golbal scope print
  printf("Gobal X address on test = %p\n\n", &y);
}
int main()
{
  // local scope
  int x = 5;
  printf("Main function address = %p\n\n", &x);

  // golbal scope print
  printf("Gobal X address on main = %p\n\n", &y);

  testScope();

  return 0;
}