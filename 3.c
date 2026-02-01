// to copy from one array to another
#include <stdio.h>
int length(char arr[])
{
    int len =0;
    while(arr[len]!= '\0'){
            len++;
        return 0;
    }
    return len;
}
// Function returns void: copies source string to destination
void copy(char source[],char dest[]){
    int i=0;
    while(source[i]!='\0'){
        dest[i]=source[i];
        i++;
    }
    dest[i]='\0';
    
}
// Concatenates str1 and str2 into result.
// The result buffer must be large enough to hold both strings and the null terminator.
int concat(char str1[],char str2[],char result[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        result[i]=str2[j];
       j++;
    }
    result[i+j]='\0';
    return i+j;

}
int compare(char str1[],char str2[]){
    int i=0;
    while (str1[i]!='\0'&& str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            return str1[i]-str2[i];
        }
        i++;
    }
    return 0;
}

// Function to reverse a string in place
void reverse(char str[]){
    int len=length(str);
    for(int i=0;i<len/2;i++){
        char temp= str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
}
int main()
{
    char str1[100],str2[100],copiedStr[200],concatenatedStr[200];
    fgets(str1,100,stdin);
    // Remove newline from str1
    int l1 = length(str1);
    if (l1 > 0 && str1[l1 - 1] == '\n') str1[l1 - 1] = '\0';

    printf("enter second string: ");
    fgets(str2,100,stdin);

    // Remove newline from str2
    int l2 = length(str2);
    if (l2 > 0 && str2[l2 - 1] == '\n') str2[l2 - 1] = '\0';
    copy(str1,copiedStr);
    printf("copied string: %s\n",copiedStr);
    int len=concat(str1,str2,concatenatedStr);
    printf("concatenated string: %s\n",concatenatedStr); 
    printf("length of concatenated string: %d\n",len);
    int cmp=compare(str1,str2);
    if(cmp==0){
        printf("strings are equal\n");
    }
    else if(cmp<0){
        printf("first string is less than second string\n");
    }
    else{
        printf("first string is greater than second string\n");
    }
    reverse(str1);
    printf("reversed first string: %s\n",str1);
    return 0;
  
 printf("reversed first string: %s\n",str1);
    return 0;
}