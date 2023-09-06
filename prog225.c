#include<stdio.h>
#define A
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%d%d",&a,&b);
#ifdef A	
	printf("Sum %d\n",a+b);
	printf("Subtraction %d\n",a-b);
	printf("Product %d\n",a*b);
#else	
	if(a==b)
		printf("Equals");
	else if(a>b)
		printf("Biggest number %d",a);
	else
		printf("Biggest number %d",b);
#endif	
	return 0;
}


