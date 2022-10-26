#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
void main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("%d",fibo(n));
}
