#include <stdio.h>

int addTwoNumbers (int*, int*);

int main()
{
  int a = 2;
  int b = 3;

  int sum = addTwoNumbers(&a, &b);
  printf("%d + %d = %d.\n", a, b, sum);

  return 0;

}

int addTwoNumbers (int *a, int *b)
{
  int result = *a + *b;

  printf("%d + %d = %d.\n", *a, *b, result);
  return result;
}
