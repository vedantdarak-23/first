//Program on displaying odd, Even nos. from a series or a range
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d are:\n",n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    printf("Odd numbers from 1 to %d are:\n",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}