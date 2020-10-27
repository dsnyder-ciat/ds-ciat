#include <stdio.h>

int main()
{
  int n[5];

  printf("Input 5 numbers: \n");

  for (int i=0; i<5; i++)
  {
    scanf("%d", &n[i]);
  }

  printf("Here is what you picked! \n");

  for (int j=0; j<5; j++)
  {
    printf("%d \n", n[j]);
  }

}
