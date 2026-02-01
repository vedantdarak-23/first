//rearrangement of word "LISTEN" IN NUMBER OF WAYS USING ASCII VALUES
#include <stdio.h>
int main(){
    char str[]="listen";
    int i,j;
    char temp;
    // str length
    int n=6; 
    printf("All possible arrangements of the word LISTEN are:\n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            //ulta position of i and j
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            printf("%s\n",str);
            //wapis jiski valur useee
           temp=str[i];
            str[i]=str[j];
            str[j]=temp;         
        }
    }
    return 0;

}
