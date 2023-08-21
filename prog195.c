#include<stdio.h>
int digits_sum(int);
int main()
{
	int n,s;
	printf("Enter any natural number:");
	scanf("%d",&n);
	s=digits_sum(n);
	printf("Sum of all the digits %d",s);
	return 0;
}
int digits_sum(int n)
{
	int sum;
	for(sum=0;n!=0;n=n/10)
		sum=sum+n%10;
	return sum;
}
