#include <stdio.h>

int main()
{
  int operator;
  float y;
  float z;

  printf("Pick an operation.  \n");
  printf("Options: 1. '+', 2. '-', 3. '*', 4. '/', \n");
  scanf("%d", &operator);
  printf("You selected  %d \n", operator);

  printf("Please enter first number \n");
  scanf("%f", &y);

  printf("Please enter second number \n");
  scanf("%f", &z);

  if (operator == 1)
  {
    printf("Result: %f \n", z + y);
  }

  if (operator == 2)
  {
    printf("Result: %f \n", z - y);
  }

  if (operator == 3)
  {
    printf("Result: %f \n", z * y);
  }

  if (operator == 4)
  {
    printf("Result: %f \n", z / y);
  }

  else
  {
    printf("Try again");
  }
}
