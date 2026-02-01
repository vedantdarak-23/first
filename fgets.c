// function for gcd using recursive approach
#include<stdio.h>
int gcd(int a,int b)
{
    if (b==0)
    return a;
    else 
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    int res = gcd(a,b);
    printf("gcd is %d",res);
    return 0;
}
