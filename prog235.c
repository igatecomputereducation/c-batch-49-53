#include<stdio.h>
void rectangle(int,int,int*,int*);
int main()
{
	int len,bre,area,peri;
	printf("Length:");
	scanf("%d",&len);
	printf("Breadth:");
	scanf("%d",&bre);
	rectangle(len,bre,&area,&peri);
	printf("Area %d\n",area);
	printf("Perimeter %d",peri);
	return 0;
}
void rectangle(int l,int b,int *a,int *p)
{
	*a=l*b;
	*p=2*(l+b);
}
