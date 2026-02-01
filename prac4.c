// program to display even numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d are:\n",n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("even %d\n",i);
        }
    }
     for(int i=1;i<=n;i++){
        if(i%2!= 0){
            printf("odd %d\n",i);
        }
    }
    
    return 0;
}