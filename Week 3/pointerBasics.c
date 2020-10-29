#include <stdio.h>

int main()
{
  int x = 1;
  int *iPtr; // Declares pointer variable

  iPtr = &x; // Stores address of x into pointer variable
  *iPtr = 5;

  // Pointer is point to int x. It will take whatever the value of iPtr
  // and replace the original specified value

  printf("iPtr = %p\n", iPtr);
  printf("&x = %p\n", &x);
  printf("The value of x is: %d \n", x);
  printf("*iPtr = %d", *iPtr);

  return 0;
}
