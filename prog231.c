#include<stdio.h>
int main()
{
	int x,y;
	x=450;
	y=223;
	printf("%d\n",*(&x));
	printf("%d",*(&y));
	return 0;
}
