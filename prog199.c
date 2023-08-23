#include<stdio.h>
int factorial(int n)
{
	int fact,i;
	for(fact=1,i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
int main()
{
	int n,sum,temp;
	printf("Enter any natural number:");
	scanf("%d",&n);
	temp=n;
	for(sum=0;n!=0;n=n/10)
		sum=sum+factorial(n%10);
	if(temp==sum)
		printf("Strong number");
	else
		printf("Not a strong number");
	return 0;
}

