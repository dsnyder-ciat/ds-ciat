#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{

  char text [] = "Hello World.";
  int letterCount = strlen(text);

  // loops through each letter
  for (int i=0; i<letterCount; i++)
  {
    text [i] = toupper(text[i]);
  }

  printf("The output is: %s \n", text);

  return 0;

}
