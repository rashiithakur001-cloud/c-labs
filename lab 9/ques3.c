#include<stdio.h>
#include<string.h>

struct Address
{
  char city[40];
  char state[50];
  int pincode;
};

struct Student
{
    char name[50];
    int rollno;
    struct Address addr;    
};
void input(struct Student s[], int n) {
    for (int i=0 ;i<n; i++){
        printf("\nEnter the details of student%d: \n",i+1);
        printf(" Enter the name of student: ");
        scanf("%s , s[i].name");
        printf(" Enter the rollno: ");
        scanf("%d , s[i].rollno");
        printf("Enter the city: ");
        scanf("%s ,s[i].addr.city" );
        printf(" Enter the state: ");
        scanf("%s ,s[i].addr.state");
        printf("Enter the pincode: ");
        scanf("%d,s[i].addr.pincode");
    }
}
   void display(struct Student s[],int n){
printf("\n-------------------------------------------------------------\n");
    printf("Name\tRoll no \t\tCity\t\tState\t\tPincode\n");
    printf("-------------------------------------------------------------\n");

   for (int i = 0; i < n; i++) {
       printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",
         s[i].name, s[i].rollno ,s[i].addr.city , s[i].addr.state , s[i].addr.pincode);
    }   
   printf("-------------------------------------------------------------\n");
}
int main() {
    struct Student s[3];
    int n = 3;

    input(s, n);
    display(s, n);

    return 0;
}








