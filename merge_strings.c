#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], merged[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    strcpy(merged, str1);  
    strcat(merged, str2);  
    printf("Merged string: %s\n", merged);
    return 0;
}
