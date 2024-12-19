#include<stdio.h>

int add(int x, int y) {
    return (x + y);
}

int multi(int x, int y) {
    return (x * y);
}

int sub(int x, int y) {
    return (x - y);
}

int div(int x, int y) {
    if (y == 0) { 
        printf("Division by zero is not allowed.\n");
        return 0; 
    }
    return (x / y);
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Addition: %d\n", add(a, b));
    printf("Multiplication: %d\n", multi(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    if (b != 0) { 
        printf("Division: %d\n", div(a, b));
    }

    return 0;
}
