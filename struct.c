#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct employees {
  char name[50];
  int empId;
  float salary;
};

int employeesNumber;

// void printEmployees (struct employees employee);

int main() {
  struct employees employee[employeesNumber];
  int i;
  int counter = 1;
  puts("\t\tEmployees Address Book\n");
  printf("\t\tEnter Number of Employees: ");
  scanf("%d", &employeesNumber);

  // populating the array
  for (i = 0; i < employeesNumber; i++) {
    printf("\t\tEnter Name for Employee No %d: ", counter++);
    scanf("%s", employee[i].name);
    printf("\t\tEnter %s's Employee Id: ", employee[i].name);
    scanf("%d", &employee[i].empId);
    printf("\t\tEnter %s's Salary: ", employee[i].name);
    scanf("%f", &employee[i].salary);
    printf("\n\n");
  }

  // printinf the array
  for (i = 0; i < employeesNumber; i++) {
    printf("\t\tEmployee Name: %s\n", employee[i].name);
    printf("\t\tEmployee Id: %d\n", employee[i].empId);
    printf("\t\tEmployee Salary: %f\n", employee[i].salary);
    printf("\n\n");
  }

  return 0;
}
