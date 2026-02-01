//Program on array of pointers and pointer to arrays.
#include <stdio.h>
int a;
int *ptr = &a;
int main()
{
    int a[5];
    int *p[5];
    printf("enter 5 elements: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        p[i]= &a[i];
    }
    printf("elements are: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*p[i]);
    }
    return 0;
}