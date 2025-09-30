#include<stdio.h>
#include<string.h>
int main(){
    char string1[50],string2[50];
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    strcat(string1,string2);
    printf("concatenated string:%s\n",string1);
    return 0;
}