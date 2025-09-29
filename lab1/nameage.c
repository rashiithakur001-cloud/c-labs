#include<stdio.h>
int main(){
    char name[50];
    int age;
    printf("enter the name:");
    scanf("%s",name);
    printf("enter the age:");
    scanf("%d",&age);
    printf("Name :%s\n", name );
    printf("Age: %d\n", age);
    return 0;
}