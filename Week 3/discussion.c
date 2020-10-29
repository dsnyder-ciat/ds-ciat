#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Changes made:
- Adjusted readability with indentations
- Added comments to explain functions

Corrections made:
- srand(time()); changed to srand(time(NULL)); as time needs an arg
- Added libraries 'stdlib.h' and 'time.h'
-- Needed for certain functions to work (ex: srand() needed <time.h>)

*/

// Program Start
int main ()
  {
    // sets iRandomNum to zero
    int iRandomNum = 0;

    // uses system clock as seed to change generated numbers
    srand ( time(NULL) );

    // sets iRandomnum to a random number between 1 and 4
    // + 1 ignores 0, setting range to 1 to 4 instead of 0 to 3
    iRandomNum = (rand() % 4) +1;

    // Title of Program
    printf("\nFortune Cookie - Chapter 3\n");

    // Switch based on result of iRandomNum
    switch (iRandomNum)
    {
      case 1:
        printf("\nYou will meet a new friend today.\n");
        break;

      case 2:
        printf("\nYou will enjoy a long and happy life.\n");
        break;

      case 3:
        printf("\nOpportunity knocks softly. Can you hear it?\n");
        break;

      case 4:
        printf("\nYou'll be financially rewarded for your good deeds.\n");
        break;
    }
    // End of Switch

    // Prints a number based on range of 1 to 49 instead of 0 to 48
    printf("\nLucky lotto numbers: ");

    printf("%d ", (rand() % 49) + 1);

    printf("%d ", (rand() % 49) + 1);

    printf("%d ", (rand() % 49) + 1);

    printf("%d ", (rand() % 49) + 1);

    printf("%d ", (rand() % 49) + 1);

    printf("%d\n", (rand() % 49) + 1);

}
// Program End
