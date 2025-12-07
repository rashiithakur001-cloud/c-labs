#include <stdio.h>
int main() {
    int num, number;
    int pos = 0, neg = 0, z= 0;
    printf("Enter how many numbers you  want to input: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &number);
     if (number > 0) {
     pos++;
    } else if (number< 0) {
     neg++;
     } else{
      z++;
    }
    }

    printf("\nCount of Positive Numbers: %d", pos);
    printf("\nCount of Negative Numbers: %d", neg);
    printf("\nCount of Zeros: %d\n", z);
    return 0;
}

