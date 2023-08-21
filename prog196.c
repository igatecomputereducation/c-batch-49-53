#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%d",&n);
	printf("Factorial %d",factorial(n));
	return 0;
}
int factorial(int n)
{
	int fact,i;
	for(fact=i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}

