#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}
void displayComplex(struct Complex c) {
    if (c.imaginary >= 0)
        printf("%.2f + i%.2f\n", c.real, c.imaginary);
    else
        printf("%.2f - i%.2f\n", c.real, -c.imaginary);
}
int main() {
    struct Complex c1, c2, sum, product;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

sum = addComplex(c1, c2);
 product = multiplyComplex(c1, c2);

   printf("\nSum of complex numbers: ");
    displayComplex(sum);

   printf("Product of complex numbers: ");
    displayComplex(product);
    return 0;
}