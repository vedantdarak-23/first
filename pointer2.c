/*create an array of 10 float elements. add all the float elements using pointers*/
#include <stdio.h>

int arr[10];

int main(){
    float sum = 0.0;
    printf("enter 10 float elements: ");
    for(int i=0; i<10; i++){
    scanf("%f",(float *)(arr + i));
    }
    for(int i=0;i<10,i++;){
        sum += *(float *)(arr + i);
    }
    printf("sum is %f",sum);
    return 0;
}