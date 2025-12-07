#include<stdio.h>
int main(){
    int i;
    int numbers[5];
    int max, min,sum=0;
    printf("enter the numbers:");
    for(i=0; i<5;i++)
    {
    printf(" enter the numbers %d:",i+1);
    scanf("%d",&numbers[i]);
    }
 max=numbers[0];
 min=numbers[0];
 sum=numbers[0];
 for(i=1; i<5 ; i++)
 {
    if(numbers[i]>max)
    {
        max=numbers[i];
    }
    if (numbers[i]<min)
    {
        min=numbers[i];
    }
    sum+=numbers[i];
 }
 printf("the arry:\n");
 for(i=0;i<5;i++)
 {
    printf("%d\n",numbers[i]);
 }
 printf("Maximum number= %d\n",max);
 printf("Minimun number= %d\n",min);
 printf("Sum=%d\n",sum);
 return 0;
}