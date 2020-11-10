#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function Prototypes:
void enterPin();

// Variables for all Functions to use:
char pin[6];
char pin2[6];
int menu;
int i;

// Main Menu function
int main()
{
  printf("\nMain Menu: \n");
  printf("1. Enter Pin\n2. Exit\n\n");
  scanf("%i", &menu);

  switch(menu)
  {
    case 1:
      enterPin();
      break;

    case 2:
      printf("Goodbye!");

    default:
      printf("Invalid selection");
      break;
  }

  return 0;
}

// Function to enter in a PIN
void enterPin()
{
  printf("\nEnter your six-digit PIN: ");
  scanf("%s", pin);

  // Uses strlen to verify required length
  // If it doesn't meet the length it calls enterPin() and starts over
  if (isdigit(pin) != 0 || strlen(pin) != 6 || pin[0] =='0')
  {
    printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
    enterPin();
  }

  printf("Enter your PIN again: ");
  scanf("%s", pin2);

  // Uses strlen to verify required length
  // If it doesn't meet the length it calls enterPin() and starts over
  if (isdigit(pin) != 0 || strlen(pin) != 6 || pin[0] =='0')
  {
    printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
    enterPin();
  }

  for (int i = 0; i<6; i++)
  {
    if (pin[i] != pin2[i])
    {
      printf("\nYour PIN doesn't match! Try again!\n");
      enterPin();
    }
  }

  printf("\nPIN saved successfully.\nReturning to Menu\n");
  main();

}
