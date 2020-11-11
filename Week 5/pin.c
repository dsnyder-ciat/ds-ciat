#include <stdio.h>
#include <string.h>

// Function Prototypes:
void enterPin();
void enterPin2();
void pinMatch();

// Variables for all Functions to use:
// I used strings to make better use of the strlen functions
char pin[6];
char pin2[6];

// Main Menu function
int main()
{
  int menu;

  printf("\nMain Menu: \n");
  printf("1. Enter Pin\n2. Exit\n\n");
  scanf("%d", &menu);

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

// Function to enter in the first PIN
void enterPin()
{
  printf("\nEnter your six-digit PIN: ");

  scanf("%s", pin);

  // Checks to make sure the string does not contain a letter
  for (int i = 0; i < strlen(pin); i++)
  {
    if ((pin[i] >= 'a' && pin[i] <= 'z') || (pin[i] >= 'A' && pin[i] <= 'Z') || (pin[i] == ' '))
    {
      printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
      enterPin();
    }
  }

  // Uses strlen to verify required length
  // If it doesn't meet the length it calls enterPin() and starts over
  if (strlen(pin) != 6 || pin[0] =='0')
  {
    printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
    enterPin();
  }

  enterPin2();
}

// This is a duplicate of enterPin() to prevent the user from having to type both PINs over if the second one is wrong.
void enterPin2()
{
  printf("Enter your PIN again: ");
  scanf("%s", pin2);
  for (int i = 0; i < strlen(pin2); i++)
  {
    if ((pin2[i] >= 'a' && pin2[i] <= 'z') || (pin2[i] >= 'A' && pin2[i] <= 'Z') || (pin2[i] == ' '))
    {
      printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
      enterPin2();
    }
  }

  if (strlen(pin2) != 6 || pin2[0] =='0')
  {
    printf("\nError : PIN must be 6 numbers, no letters, and cannot start with 0. \n");
    enterPin2();
  }

  pinMatch();
}

// Once second PIN is accepted, PINs are checked using this Function
// If PINs don't match it calls the first enterPin and the user starts over.
// If PINs match, it accepts both PINs and returns to the main menu.
void pinMatch()
{
  for (int i = 0; i<6; i++)
  {
    if (pin[i] != pin2[i])
    {
      printf("\nYour PIN doesn't match! Try again!\n");
      enterPin();
    }
  }

  printf("\nPIN accepted!\nReturning to Main Menu!\n");
  main();
}
