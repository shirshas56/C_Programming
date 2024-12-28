#include <stdio.h>
#include <string.h>
void reverseWords(char str[]) {
    int length = strlen(str);
    int start = length - 1, end = length - 1;
    printf("Reversed sentence: ");
    while (start >= 0) {
        if (str[start] == ' ' || start == 0) {
            if (start == 0) {
                printf("%.*s ", end - start + 1, &str[start]);
            } else {
                printf("%.*s ", end - start, &str[start + 1]);
            }
            end = start - 1;
        }
        start--;
    }
    printf("\n");
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseWords(str);
    return 0;
}
