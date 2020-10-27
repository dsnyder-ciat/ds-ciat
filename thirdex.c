#include <stdio.h>

int main()
{
  int correctAnswer1 = 5;
  int correctAnswer2 = 6;
  int user1 = 0;
  int user2 = 0;
  int x;

  printf("What much is 2+3? How much is 2*3?");
  x = scanf("%d %d", &user1, &user2);

  if (user1 == correctAnswer1 && user2 == correctAnswer2)
  {
    printf("You got it!");
  }
  else
  {
    printf("fail");
  }

  return 0;
}
