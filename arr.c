#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    for(i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nMarks of the students:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
