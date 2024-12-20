#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];  
    int position = 0;      

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];  
            position = i;       
        }
    }
    printf("The smallest number is %d at position %d.\n", smallest, position + 1);
    return 0;
}
