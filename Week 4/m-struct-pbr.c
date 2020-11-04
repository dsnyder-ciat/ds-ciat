#include <stdio.h>
#include <string.h>

typedef struct employee
{
  char name[10];
  int id;
  float salary;
} emp;

void processEmpl(emp*);

int main()
{
  emp empl = {0, 0, 0};

  emp *ptrEmp;
  ptrEmp = &empl;

  processEmpl(ptrEmp);

  return 0;
}

void processEmpl(emp *employ)
{
  employ->id = 123;
  strcpy(employ->name, "Sheila");
  employ->salary = 65000.00;

  printf("ID: %d\n", employ->id);
  printf("Name: %s\n", employ->name);
  printf("Employee: $%.2f\n", employ->salary);
}
