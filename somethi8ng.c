//find length of string
#include <stdio.h>
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
    int temp = length;
    while (length != 0){
        revstr[var] = str[length-1];
        var++;
        length--;
    }; 
    revstr[temp]='\0';
    printf("reversed string is: %s\n", revstr);

    printf("length of string is: %d", temp);
    return 0;

}