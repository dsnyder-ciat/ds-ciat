// Criteria:
// - Create a program that let the user input five characters into a string
// - Allow the user to input 5 more characters into another string
// - Print a message if 'z' was used
// - Concatenate the two arrays together

// Required Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // str1 is the first string for entry
  // larger size to account for concatenation
  char str1[20];

  // str2 is the second string for entry
  char str2[10];


  printf("Enter 5 letters: ");

  // used fgets() instead of scanf() to limit user input
  fgets(str1,20,stdin);

  // this line removes the null character from the end of fgets()
  // and allows the concatenated strings to be on the same line
  str1[ strcspn( str1, "\n" ) ] = '\0';

  printf("Enter 5 more letters: ");

  fgets(str2,10,stdin);
  str2[ strcspn( str2, "\n" ) ] = '\0';

  // simple if/else script to look for 'z' in str1
  // strchr searches for the specified character in the specified string
  // if 'z' is not NULL (is present) it will print the provided message
  if (strchr (str1, 'z') != NULL)
  {
    printf("\nI found a 'z'!\n");
  }

  // else not included as it isn't needed

  // strcat concatenates the two strings together by taking str2
  // and inputting it into str1 - which is why str1 is set to be larger
  strcat(str1, str2);

  // prints str1 only now that str1 and str2 are combined into str1
  printf("\nYour selected letters combined are: %s", str1);

  // takes the length of str1 and outputs the length with %ld
  printf("\nThe length of the new string is: %ld \n", strlen(str1));

return 0;

}

// Self Study Resources:
// Removing Null from fgets() : https://biturl.top/NBzqi2
// Explanation of fgets()     : https://biturl.top/zABFb2
// Explanation of strchr()    : https://biturl.top/emyu6z
// Other bits taken from previous assignements available on github
