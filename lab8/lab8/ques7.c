#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};


void addStudent(struct Student s[], int *count);
void displayStudents(struct Student s[], int count);
void searchStudent(struct Student s[], int count);
void updateMarks(struct Student s[], int count);

int main() {
    struct Student s[MAX];
    int count = 0;
    int choice;
 while(1) {
        printf("\n====== Student Record System ======\n");
        printf("1. Add a new student record\n");
        printf("2. Display all student records\n");
        printf("3. Search for a student by roll number\n");
        printf("4. Update marks of a student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(s, &count);
                break;
            case 2:
                displayStudents(s, count);
                break;
            case 3:
                searchStudent(s, count);
                break;
            case 4:
                updateMarks(s, count);
                break;
            case 5:
                printf("Exiting program... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void addStudent(struct Student s[], int *count) {
    if(*count >= MAX) {
        printf("Cannot add more students. Limit reached!\n");
        return;
    }
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[*count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);
    (*count)++;
    printf("Student record added successfully!\n");
}
void displayStudents(struct Student s[], int count) {
    if(count == 0) {
        printf("No student records to display.\n");
        return;
    }
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------\n");
    for(int i = 0; i < count; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}
void searchStudent(struct Student s[], int count) {
    int roll, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for(int i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("Student found:\n");
            printf("Roll No: %d\nName: %s\nMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Student with roll number %d not found.\n", roll);
}
void updateMarks(struct Student s[], int count) {
    int roll, found = 0;
    float newMarks;
    printf("Enter Roll Number to update marks: ");
    scanf("%d", &roll);
    for(int i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("Enter new marks for %s: ", s[i].name);
            scanf("%f", &newMarks);
            s[i].marks = newMarks;
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Student with roll number %d not found.\n", roll);
}