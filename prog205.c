#include<stdio.h>
void subfunc(int,int);
int main()
{
	int a,b;	
	a=10;
	b=20;
	subfunc(a,b);
	printf("%d\n%d",a,b);
	return 0;
}
void subfunc(int x,int y)
{
	x=x+5;
	y=y+5;
}
