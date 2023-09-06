#include<stdio.h>
int main()
{
	int len,bre,area,peri;
	int *l=&len,*b=&bre,*a=&area,*p=&peri;
	printf("Length:");
	scanf("%d",l);
	printf("Breadth:");
	scanf("%d",b);
	*a=(*l)*(*b);
	*p=2*(*l+*b);
	printf("Area %d\n",*a);
	printf("Perimeter %d",*p);
	return 0;
}
