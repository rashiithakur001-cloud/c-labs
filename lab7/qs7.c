#include <stdio.h>
int Palindrome(int n) {
    int original = n;
    int rev= 0;
while (n > 0) {
    int digit = n % 10;
     rev = rev * 10 + digit;
     n /= 10;
}
  if (original == rev)
     return 1; //  palindrome
    else
     return 0; //  palindrome
}
int main() {
    int count;
    printf("How many numbers do you want to check? ");
    scanf("%d", &count);

for (int i = 0; i < count; i++) {
     int num;
     printf("Enter number %d: ", i + 1);
     scanf("%d", &num);

 if (Palindrome(num))
    printf("%d is a palindrome.\n", num);
    else
    printf("%d is not a palindrome.\n", num);
  }
 return 0;
} 