#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char name[] = {'\0'};
  int length;

  printf("What is your name? \n");

  scanf("%s", name);

  printf("\nNice to meet you, %s!\n", name);
  length = strlen(name);

  printf("\nDid you know your name is %d characters long?\n", length);

  for (int i=0; i<length; i++)
  {
    name[i] = toupper(name[i]);
  }

  printf("\nHere it is in all uppercase! %s \n", name);


  return 0;
}
