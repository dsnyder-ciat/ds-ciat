#include <stdio.h>

void passByValue(int); // Function prototype
int x;

int main()
{
  printf("Enter a number: \n");
  scanf("%d", &x);
  passByValue(x);
  printf("The original value is %d", x);
  return 0;
}

void passByValue (int x)
{
  x += 5;
  printf("The value of x is now: %d\n", x);
}
