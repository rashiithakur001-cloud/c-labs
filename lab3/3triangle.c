#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE LENGTH OF STICKS");
    scanf("%d %d %d", &a, &b, &c);
  if (a+b>c && a+c>b && b+c>a)
   printf("triangle is possible\n");
   else 
   printf("triangle is not possible\n");
   return 0;
}
