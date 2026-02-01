//Program on user defined string functions-length & reverse.
#include <stdio.h>
#include <string.h>
void stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
}
void stringReverse(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
        if (fgets(str, sizeof(str), stdin) == NULL) {
            fprintf(stderr, "Input error or EOF\n");
            return 1;
        }
        /* Remove trailing newline if present */
        str[strcspn(str, "\n")] = '\0';
    stringLength(str);
    stringReverse(str);

    return 0;
}