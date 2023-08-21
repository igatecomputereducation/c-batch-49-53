#include<stdio.h>
int sum(int n,int m)
{
	return n+m;
}
int sub(int n,int m)
{
	return n-m;
}
int pro(int n,int m)
{
	return n*m;
}
float div(int n,int m)
{
	return (float)n/m;
}
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%d%d",&a,&b);
	printf("Addition %d\n",sum(a,b));
	printf("Subtraction %d\n",sub(a,b));
	printf("Product %d\n",pro(a,b));
	printf("Division %f",div(a,b));
}

