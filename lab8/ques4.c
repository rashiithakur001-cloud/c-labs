#include <stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    float salary;
    struct Date joinDate;
};
void inputEmployee(struct Employee *e) {
    printf("Enter name: ");
    scanf(" %[^\n]",e->name);
    e->name[strcspn(e->name, "\n")] = 0; 

    printf("Enter salary: ");
    scanf("%f", &e->salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e->joinDate.day, &e->joinDate.month, &e->joinDate.year);
}

void displayEmployee(struct Employee e) {
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d/%02d/%d\n", e.joinDate.day, e.joinDate.month, e.joinDate.year);
}

void printEmployeesAfterYear(struct Employee employees[], int n, int year)
 { int found = 0;
    printf("\nEmployees who joined after %d:\n", year);
    for (int i = 0; i < n; i++) {
        if (employees[i].joinDate.year > year) {
            printf("%s\n", employees[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees joined after %d.\n", year);
    }
}
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
   struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    printf("\nEmployee details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }
  printEmployeesAfterYear(employees, n, 2020);
  return 0;
}