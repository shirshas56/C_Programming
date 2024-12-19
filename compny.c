#include <stdio.h>
struct company {
    char name[100];
    char address[200];
    char phone[15];
    int noOfEmployees;
};

int main() {
    struct company c;
    printf("Enter the company name: ");
    fgets(c.name, sizeof(c.name), stdin);
    printf("Enter the company address: ");
    fgets(c.address, sizeof(c.address), stdin);
    printf("Enter the company phone: ");
    scanf("%s", c.phone);
    printf("Enter the number of employees: ");
    scanf("%d", &c.noOfEmployees);
    printf("\n--- Company Details ---\n");
    printf("Name: %s", c.name);
    printf("Address: %s", c.address);
    printf("Phone: %s\n", c.phone);
    printf("Number of Employees: %d\n", c.noOfEmployees);
    return 0;
}
