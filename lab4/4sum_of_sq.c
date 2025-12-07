#include<stdio.h>
int main() {
    int n, sum = 0;
 printf("Enter an integer n: ");
    scanf("%d", &n);
  for (int i = 2; i <= n; i += 2)
     {
      sum += i * i;  
    }
   printf("The sum of squares of even numbers between 2 and %d is: %d\n", n, sum);
   return 0;
}

