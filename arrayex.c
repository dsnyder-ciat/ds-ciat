#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n[10];
  int i, j;
  int bal[] = {2, 34, 55, 75, 4, 79};

  for (i=0; i<10; i++)
  {
    n[i] = i+10;
    printf("n[%d] = %d\n",i, n[i]);
  }

  for (j=0; j<6; j++)
  {
    printf("bal[%d] = %d\n",j, bal[j]);
  }
}
