#include<stdio.h>
int array_sum(int[],int);
int main()
{
	int a[50],n,i,sum;
	printf("How many elements:");
	scanf("%d",&n);
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Sum of elements %d\n",array_sum(a,n));
	return 0;
}
int array_sum(int x[],int n)
{
	int sum,i;
	for(sum=0,i=0;i<n;i++)
		sum=sum+x[i];
	return sum;
}
