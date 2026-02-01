/*add the number which is equivalent to your date.month(21.9)to an array created in Q2*/
#include <stdio.h>
 float arr[10];
int main(){
   
    float sum=0.0;
    float *ptr1 = &sum;
    float *ptr2 = arr;
    for(int i=0;i<10,i++;){
      ptr1 = (float *)(arr + i);
      scanf(" %f ",ptr1);
   }
   for (int i=0;i<10;i++){
        *ptr1 = *(float*)(arr+i);
        printf("gimme the no. %f ",ptr1);
   }

   
}