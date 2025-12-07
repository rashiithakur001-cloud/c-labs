
 
#include <stdio.h>
#include <string.h>

struct Employee {
    char id[20];
    char name[40];
    char desig[30];
    double salary;
};
void input(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n" , i+1);
        printf(" Enter the Employee ID: ");
        scanf("%s", emp[i].id);
        printf(" Enter the Name: ");
        scanf("%s", emp[i].name);
        printf(" Enter the Designation: ");
        scanf("%s", emp[i].desig);
        printf("Enter the Salary: ");
        scanf("%lf", &emp[i].salary);
 }
}

void display(struct Employee emp[], int n) {
    printf("\n--------------------------------------------\n");
    printf("Id\t\tName\t\tDesignation\t\tSalary\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%s\t\t%s\t\t%.2lf\n",
               emp[i].id, emp[i].name, emp[i].desig, emp[i].salary);
    }
    printf("--------------------------------------------\n");
}

int main() {
 int n = 5;
 struct Employee emp[n];

  input(emp, n);
  display(emp, n);
 return 0;
}












