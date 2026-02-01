#include<stdio.h>
#include<string.h>

int main(){
    int arr[5]={10,25,30,45,50};
    int *ptr = arr;
    
    for (int i =0;i<5;i++)
    {
        printf("%d\n",2**(ptr + i));
    }
    for (int i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("%d is even\n", *(ptr + i));
        } else {
            printf("%d is odd\n", *(ptr + i));
        }
    }



    return 0;
}