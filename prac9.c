//Program on recursive and non-recursive functions such as Factorial, Fibonacci series, etc.
#include <stdio.h>
long long fact(int n)
{
    if (n==0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,m,res,feb;
    printf("enter a number: ");
    scanf("%d",&n);
    scanf("%d",&m);
    res = fact(n);
    feb = fib(m);
    printf("factorial and fib of %d is %d\n",n,res);
    for (int i = 0; i <= m; i++)
{
    printf("%d ", fib(i));
}
    return 0;

}