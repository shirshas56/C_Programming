#include <stdio.h>
#include <string.h>
int main() {
    char str[100],sub[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter a substring to search: ");
    gets(sub);
    if (strstr(str,sub)!= NULL)
        printf("Substring found\n");
    else
        printf("Substring not found\n");
    return 0;
}
