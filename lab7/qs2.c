#include <stdio.h>
int Prime(int n) {
 if (n < 2)
 return 0;   // not prime
for (int i = 2; i * i <= n; i++) {
 if (n % i == 0)
return 0;   // not prime
 }
 return 1;   // prime
}
int main() {
 int lower, upper, n, count = 0, num = 2, nthPrime;
 int i;
printf("Enter lower and upper limit: ");
 scanf("%d %d", &lower, &upper);
printf("Prime numbers between %d and %d are:\n", lower, upper);
 for (i = lower; i <= upper; i++) {
 if (Prime(i))
 printf("%d ", i);
}
 printf("\n");
printf("\nEnter n to find nth prime: ");
 scanf("%d", &n);
  while (1) {
 if (Prime(num)) {
 count++;
 if (count == n) {
  nthPrime = num;
 break;
}
 }
 num++;
 }
 printf("The %dth prime number is: %d\n", n, nthPrime);
 return 0;
}