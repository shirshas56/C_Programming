#include <stdio.h>
int main() {
    float a, x, b, result;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    if (a * x - b == 0) {
        printf("Division by zero error! The denominator (ax - b) cannot be zero.\n");
        return 1;
    }
    result = (a * x + b) / (a * x - b);
    printf("The result of the expression (ax + b) / (ax - b) is: %.2f\n", result);
    return 0;
}
