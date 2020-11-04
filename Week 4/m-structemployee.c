#include <stdio.h>
#include <string.h>

typedef struct employee
{
  char fname[10];
  char lname[10];
  int id;
  float salary;
} emp;

int main()
{
  emp empl;

  strcpy(empl.fname, "Michael");
  strcpy(empl.lname, "Vine");

  empl.id = 123;
  empl.salary = 50000.00;

  printf("First Name: %s\n", empl.fname);
  printf("Last Name: %s\n", empl.lname);
  printf("Employee ID: %d\n", empl.id);
  printf("Salary: $%.2f\n", empl.salary);

  return 0;
}
