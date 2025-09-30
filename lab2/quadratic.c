#include<stdio.h>
#include <math.h>

int main(){
    int a,b,c;
     printf("enter a:\n");
     scanf("%d",&a);
     printf("enter b:\n");
     scanf("%d",&b);
     printf("enter c:\n");
     scanf("%d",&c);
     int d=((b*b)-(4*a*c));
     if(d<0){
        printf("roots do not exist");
     }
     else{
     float e =((-b+sqrt(d))/2*a);
     float f= ((-b-sqrt(d))/2*a);

     printf("the roots are: %f\n",e);
     printf("the roots are: %f\n",f);
     }
      return 0;

}