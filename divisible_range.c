#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 500) {
        if (num % 5 == 0 && num % 11 == 0) {
            printf("%d is divisible by both 5 and 11.\n", num);
        } else {
            printf("%d is not divisible by both 5 and 11.\n", num);
        }
    } else {
        printf("Please enter a number within the range of 100 to 500.\n");
    }
    return 0;
}
