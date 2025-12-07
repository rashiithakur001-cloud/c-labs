#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("enter larger number a :\n");
    scanf("%d",&a);
    printf("enter smaller number b :\n");
    scanf("%d",&b);

        if(a%b==0){
            printf("b is a divisor of a");
        }
        else{
            printf("b is not a divisor of a");
        }
    return 0;
}