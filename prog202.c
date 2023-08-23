#include<stdio.h>
void display(int[],int);
int main()
{
	int a[]={10,20,30,40,50,60};
	display(a,6);
	return 0;
}
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
}
