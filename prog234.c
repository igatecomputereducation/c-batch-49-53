#include<stdio.h>
int main()
{
	float price,bill;
	int qty;
	float *p=&price,*b=&bill;
	int *q=&qty;
	printf("Price:");
	scanf("%f",p);
	printf("Quantity:");
	scanf("%d",q);
	*b=(*p)*(*q);
	printf("Bill %f",*b);
	return 0;
}
