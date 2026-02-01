/*add 2 integers using pointer*/
/*   *dereference operator 
     & AMPERCENT   */
#include <stdio.h>

int main(){
int a;
int b;
int *p;
int *q;
p = &a;
q = &b;
printf("enter 2 intergers: ");
scanf("%d %d",&a,&b);
int sum = *p + *q;
printf("sum is %d",sum);
return 0;
}