#include<stdio.h>
int main(){
 int a,b,c,d,e;
 float average;
 printf("ENTER THE FIVE NUMBERS");
 scanf("%d %d %d %d %d" ,&a, &b, &c, &d, &e);
average= (a+b+c+d+e)/5;
printf("AVERAGE: %f\n",average);
return 0;
}