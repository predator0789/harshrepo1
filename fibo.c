#include<stdio.h>
void main()
{
	printf("Enter a no.\n");
	int n,i=3;
	scanf("%d",&n);
	int a=1,b=2,c;
	printf("%d %d ",a,b);
	while(i<=n)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}
}
