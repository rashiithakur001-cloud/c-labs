#include <stdio.h>
long b_coeff(int n,int r){
long result = 1;
int i;

if (r>n-r)
 r=n-r;
for(i=1;i<=r;i++){
    result = result*(n-i+1)/i;
}
     return result;
}
  int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
 if (r>n||n<0||r<0){
    printf("Invalid input\n");
 } else {
    printf("cofficient(%d,%d)=%ld\n",n,r,b_coeff(n,r));
 } 
   return 0;
  }

