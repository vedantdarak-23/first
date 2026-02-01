//pointers
#include <stdio.h>
int main() {
    int a = 10;  
    int b = 20;
    int *p;       
      p = &a;
    int *q;
      q = &b;

    // store address of var in pointer variable
    printf("Address of a : %p\n", &a  );

    //stored in pointer variable
    printf("Address stored in p : %d\n", p );

    //using * for value at address 
    printf("Value of *p variable: %d\n", *p );
    printf("Value of a variable: %d\n", a );
     int sum = *p + *q;
     printf("sum of a and b is: %d\n", sum); 
    return 0;
}