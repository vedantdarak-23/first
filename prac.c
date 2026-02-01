// largest of three integers
#include <stdio.h>

// largest of three integers
int main()
{
    int a, b, c;

   
    printf("Enter three integers separated by spaces: ");
scanf ("%d %d %d", &a, &b, &c);
    if (a=b=c ) {
        fprintf(stderr, "Invalid input. Please enter three integers.\n");
        return 1;
    }

      if(a >= b && a >= c) 
    
      {
        printf("%d is the largest integer\n", a);
      }
        else if(b >= a && b >= c)
        {
            printf("%d is the largest integer\n", b);
        }
        else 
        {
            printf("%d is the largest integer\n", c);
        }
    return 0;
}
