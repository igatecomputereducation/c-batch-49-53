#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter a value to a:");
	scanf("%d",&a);
	printf("Enter a value to b:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Value of a %d\n",a);
	printf("Value of b %d",b);
	return 0;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
