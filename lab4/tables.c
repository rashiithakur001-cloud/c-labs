#include <stdio.h>
int main(){
  for(int i=1;i<=13;i++){
   printf("The table of %d:",i);
    for(int j=1;j<=10;j++){
    printf("\n %d x %d = %d \n",i,j,i*j);
     }
    }
    return 0;
}