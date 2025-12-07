#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
printf("Hexadecimal value:%X\n ",num);
printf("octal value:%o \n ",num);
    if(num>=32 && num<=126){
        printf("the Ascii character is %c \n",num);
    }
      else {
        printf("Number is outside the printable ASCII range (32-126).\n");
    }
    return 0;
}