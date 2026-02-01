#include <stdio.h>
long long fact(int n)
{
    if (n == 0)
    return 1;
    else
    return n*fact(n-1);

}
int main()
{
int n;
scanf("%d",&n);
int res = fact(n);
printf("factorial is %d ",res);
return 0 ;
}