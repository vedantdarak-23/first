//palindrome
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int length =0;
    printf("enter the string: ");
    scanf("%s",str);
    while (str[length] != '\0') {
        length++;
    }
    char revstr[length];
    int var =0;
    int temp = length; // Store original length for later use
    while (length != 0){
        revstr[var] = str[length-1];
        var++;
        length--;
    }; 
    revstr[temp] = '\0'; // Null-terminate the reversed string
    printf("reversed string is: %s\n", revstr);

    if (strcmp(str, revstr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    printf("length of string is: %d\n", temp);
    return 0;
}