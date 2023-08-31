#include<stdio.h>
#include "manip.h"
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%d%d",&a,&b);
	printf("Sum %d\n",sum(a,b));
	printf("Subtraction %d\n",sub(a,b));
	printf("Product %d\n",pro(a,b));
	printf("division %f",div(a,b));
	return 0;
}

