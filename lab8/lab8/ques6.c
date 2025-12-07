#include <stdio.h>
enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };
int main() {
 int choice;
 int a, b;
  enum Operation op;
    do {
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

  op = (enum Operation)choice;
      if (op == EXIT) {
     printf("Exiting.\n");
            break;
  }
 printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
     switch (op) {
     case ADD:
        printf("Result = %d\n", a + b);
         break;
     case SUBTRACT:
        printf("Result = %d\n", a - b);
          break;
     case MULTIPLY:
        printf("Result = %d\n", a * b);
          break;
     case DIVIDE:
  if (b != 0)
    printf("Result = %.2f\n", (float)a / b);
  else
    printf("Error: Division by zero is not allowed.\n");
      break;
  default:
    printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (op != EXIT);
      return 0;
}