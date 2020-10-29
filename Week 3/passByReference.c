#include <stdio.h>

void passByReference(int *); // Function prototype
int x;

int main()
{
  printf("Enter a number: \n");
  scanf("%d", &x);
  passByReference(&x);
  printf("The original value is %d", x);
  return 0;
}

void passByReference (int *x)
{
  *x += 5;
  printf("The value of x is now: %d\n", *x);
}
