#include <stdio.h>
int main() {
    int arr[10], n, pos, element, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
     
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[pos - 1] = element;
        n++;

        printf("Array after insertion: \n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
