#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 1) {
        n = n / 2;
        count++;
    }
    printf("number can be divided by 2 until it becomes less than or equal to 1 for: %d times\n", count);
   return 0;
}