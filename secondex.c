#include <stdio.h>

int main()
{
  int dummy;
  char yesOrNo;

  printf("Do you want to play? (y/n) \n");
  dummy = scanf("%c", &yesOrNo);

  if (yesOrNo == 'y' || yesOrNo == 'Y')
  {
    printf("Let's go! \n");
  }
  else
  {
    printf("Bummer \n");
  }

  return 0; 
}
