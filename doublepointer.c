#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    int **q;
     p = &a;
     q= &p;
   printf("Value of a is %d \n", a);
   printf("Value of  p is %p \n", p);
   printf("Value of *p is %d \n", *p);
   printf("Value of *q is %d \n", **q);

return 0;
}