#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  FILE *pRead;

  char fname[20];
  char lname[20];
  char id[15] = {0};
  float gpa = {0.0};

  pRead = fopen("students.dat", "r");
  if (pRead == NULL)
    {
      printf("File not found.\n");
    }

    else {
      printf("Name\t\tID\tGPA\n\n");
      fscanf(pRead, "%s%s%s%f", fname, lname, id, &gpa);

      printf("%s %s\t%s\t%.2f\n", fname, lname, id, gpa);
      fclose(pRead);

      return 0;
    };
  }
