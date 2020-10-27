#include <stdio.h>

int main()
{
  int n[5]; // array of numbers for user to input
  int i, j; // Variable used for initial input and output
  int m, max; // Variables used to get highest entered
  int sum, total, avg; // int sum to get average of entered numbers

  sum = avg;
  max = n[0]; // Sets largest to 0 at start

  // Instructs user to enter five numbers
  printf("Input 5 numbers: \n");

  for (i=0; i<5; i++)
  {
    scanf("%d", &n[i]); // user enters numbers here
  }

  for (m = 1; m < 5; m++)
  {
    if (max < n[m]) // compares current array of 0 to new array
        max = n[m]; // if new array is larger, it replaces the value
  }

  // takes array and adds it together
  for (total = 0;total < 5; total++)
  {
    sum = sum + n[total];
  }

  // takes result and averages it
  avg = (int)sum / total; // takes the sum, divides by the array size for average

  printf("Your average is %d and largest entered is %d", avg, max);

  return 0;

}

// Independent Study Sources:
// Average Help: https://www.tutorialspoint.com/learn_c_by_examples/average_of_array_in_c.htm
// Array Help: https://www.tutorialspoint.com/learn_c_by_examples/largest_array_element_in_c.htm
