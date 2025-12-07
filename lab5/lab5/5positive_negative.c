#include<stdio.h>
int main(){
int numbers [] = {3,-4,-6,9,0,7,2,10,-2,-1};
int i;
int n = sizeof(numbers)/sizeof(numbers[0]);
int positivecount = 0;
int negativecount = 0;
for (i=0; i<n; i++)
{
if(numbers[i] >=0)
{
    positivecount++;
}
else 
{ 
  negativecount++;
}
}
printf("positive numbers:%d\n", positivecount);
printf("negative numbers:%d\n", negativecount);
return 0;
}