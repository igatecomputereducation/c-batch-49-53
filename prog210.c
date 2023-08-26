#include<stdio.h>
int fact(int);
int main()
{
	int n,fa;
	printf("Enter any natural number:");
	scanf("%d",&n);
	fa=fact(n);
	printf("Factroial %d",fa);
	return 0;
}
int fact(int n)
{
	int f;
	if(n==1)
		return 1;
	f=n*fact(n-1);
	return f;
}
