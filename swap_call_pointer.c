#include <stdio.h>

void swap_by_value(int i, int j) {
    int temp = i;
    i = j;
    j = temp;
    printf("Inside swap_by_value: i=%d, j=%d\n", i, j);
}

void swap_by_reference(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
    printf("Inside swap_by_reference: i=%d, j=%d\n", *i, *j);
}

int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Numbers before swap_by_value: num1=%d, num2=%d\n", num1, num2);
    swap_by_value(num1, num2);
    printf("Numbers after swap_by_value: num1=%d, num2=%d\n", num1, num2);

    printf("Numbers before swap_by_reference: num1=%d, num2=%d\n", num1, num2);
    swap_by_reference(&num1, &num2); 
    printf("Numbers after swap_by_reference: num1=%d, num2=%d\n", num1, num2);

    return 0;
}
