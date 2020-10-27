#include <stdio.h>

int main()
{
  int operator;
  float y;
  float z;

  printf("Pick an operation. \n");
  printf("Options: 1. '+', 2. '-', 3. '*', 4. '/', \n");
  scanf("%d", &operator);
  printf("You selected  %d \n", operator);

  printf("Please enter first number \n");
  scanf("%f", &y);

  printf("Please enter second number \n");
  scanf("%f", &z);


  switch(operator)
  {
    case 1 :
    printf("Result: %f \n", z + y);
    break;

    case 2:
    printf("Result: %f \n", z - y);
    break;

    case 3:
    printf("Result: %f \n", z * y);
    break;

    case 4:
    printf("Result: %f \n", z / y);
    break;

    default :
    printf("Invalid Selection \n");
  }
}
