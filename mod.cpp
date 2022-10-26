#include<stdio.h>
int main()
{
	int n,d;
	printf("Enter a no.");
	scanf("%d",&n);
	/*d=n/2;*/
	if((n&1)==0)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
