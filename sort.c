#include<stdio.h>
#include<conio.h>
void input(int *p)
{
	int i;
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	scanf("%d",p+i);
}
void show(int *p)
{
	int i;
	printf("Display\n");
	for(i=0;i<5;i++)
	printf("%d\n",*(p+i));
}
void sort(int *p)
{
	int i,j,t;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
void main()
{
	int a[5];
	char s[10]="computer";
	int l=strlen(s);
	printf("%d\n",l);
	input(a);
	sort(a);
	show(a);
}
