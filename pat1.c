#include<stdio.h>
int main()
{
	int i,j,k,c=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=9/i)
			 printf("*");
			else if(j>=4+i)
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
}

