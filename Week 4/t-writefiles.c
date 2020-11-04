#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  FILE *pWrite;

  char fname[20];
  char lname[20];
  char id[15] = {0};
  float gpa = {0.0};

  pWrite = fopen("students.dat", "w");
  if (pWrite == NULL)
    {
      printf("File not found.\n");
    }

    else {
      printf("Enter information:\n");
      printf("First Name, Last Name, ID, GPA\n");
      scanf("%s%s%s%f", fname, lname, id, &gpa);

      fprintf(pWrite, "%s\t%s\t%s\t%.2f\n", fname, lname, id, gpa);

      fclose(pWrite);

      return 0;
    };
  }
