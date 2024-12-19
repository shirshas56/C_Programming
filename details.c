#include <stdio.h>
struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
};
void displayStudentDetails(struct student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s", s.name);
    printf("Address: %s", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student students[12]; 

    for (int i = 0; i < 12; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar();  
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);  
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);       
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();  
    }
    for (int i = 0; i < 12; i++) {
        displayStudentDetails(students[i]);
    }
    return 0;
}
