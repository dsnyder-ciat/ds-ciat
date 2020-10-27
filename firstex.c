#include <stdio.h>
#include <stdlib.h>

int main() {

  int inNum;
  int result = 1;

  printf("Enter a number: \n");
  scanf("%d", &inNum);

  for (int x = inNum; x > 1; x--) {
    result = result *x;
  }
  printf ("%d \n", result);
  return 0;
}
