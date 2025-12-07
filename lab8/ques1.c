#include <stdio.h>
struct Student {
 int roll_no;
 char name[50];
float marks;
};
void details(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void display(struct Student s[], int n) {
    printf("\n--------------------------------\n");
    printf("Roll No\t\tName\t\tMarks\n");
    printf("--------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t\t%-10s\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    printf("--------------------------------------------\n");
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];  

    details(s, n);
    display(s, n);
     return 0;
}