#include <stdio.h>
#define Pi 3.14159
void greet() {
    printf("Welcome to the UPES\n");
}
int add(int a, int b)
{
 return a + b;
}

float circleArea(float r) 
{
 return Pi * r * r;
}
int main() {
    int a, b, sum;
    float radius, area;
 greet(); 
 printf("\nEnter the two numbers a and b: ");
 scanf("%d %d", &a, &b);
     sum = add(a, b);
 printf("Sum = %d\n", sum);
 printf("\nEnter radius of the circle: ");
 scanf("%f", &radius);
   area = circleArea(radius);
 printf("Area = %.2f\n", area);
  return 0;
}