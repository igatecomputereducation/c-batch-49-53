#include<stdio.h>
int minimum(int);
int maximum(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%d",&n);
	printf("Minimum digit %d\n",minimum(n));
	printf("Maximum digit %d",maximum(n));
	return 0;
}
int minimum(int n)
{
	int min;
	for(min=n%10;n!=0;n=n/10)
	{
		if(n%10<min)
			min=n%10;
	}
	return min;
}
int maximum(int n)
{
	int max;
	for(max=n%10;n!=0;n=n/10)
	{
		if(n%10>max)
			max=n%10;
	}
	return max;
}
