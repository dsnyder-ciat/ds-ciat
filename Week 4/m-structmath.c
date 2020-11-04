#include <stdio.h>
#include <stdlib.h>

struct math
{
  int x, y, result;
};

int main()
{
  struct math prob1;
  prob1.x = 10;
  prob1.y = 20;
  prob1.result = prob1.x + prob1.y;

  printf("The result is %d\n", prob1.result);

  return 0;
}
