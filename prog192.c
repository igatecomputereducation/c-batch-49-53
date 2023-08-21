#include<stdio.h>
void rectangle(int,int);
int main()
{
	int len,bre;
	printf("Length:");
	scanf("%d",&len);
	printf("Breadth:");
	scanf("%d",&bre);
	rectangle(len,bre);
	return 0;
}
void rectangle(int l,int b)
{
	printf("Area %d\n",l*b);
	printf("Perimeter %d\n",2*(l+b));
}
