#include <stdio.h>
#include <stdlib.h>

int main ()
{
  // char color[12] is an array of up to 12 values
  char color[12] = {'\0'};
  printf("Enter a color: \n");

  // %s treats the array as a string
  scanf("%s", color);
  printf("\nYou entered: %s\n", color);

  // %c treats the array as a set of characters and pulls the identified value
  printf("The first character is: %c", color[0]);

  return 0;

}
