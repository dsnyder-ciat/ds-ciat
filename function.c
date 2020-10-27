#include <stdio.h>
#include <stdlib.h>

int addTwoNumbers (int, int);
int subTwoNumbers (int, int);
int multTwoNumbers (int, int);

int a = 2;
int b = 3;

int main()
{

  int sum = addTwoNumbers(a,b);
  int sub = subTwoNumbers(a,b);
  int mult = multTwoNumbers(a,b);

  printf("%d + %d = %d \n", a, b, sum);
  printf("%d - %d = %d \n", a, b, sub);
  printf("%d * %d = %d \n", a, b, mult);
  return 0;
}

// Function Definitions
int addTwoNumbers (int operand1, int operand2)
{
  int result = operand1 + operand2;
  return result;
}

int subTwoNumbers (int operand1, int operand2)
{
  int result = operand1 - operand2;
  return result;
}

int multTwoNumbers (int operand1, int operand2)
{
  int result = operand1 * operand2;
  return result;
}
