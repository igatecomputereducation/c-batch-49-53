#include<stdio.h>
#define area(x,y) x*y
#define peri(x,y) 2*(x+y)
int main()
{
	int l,b;
	printf("Enter 2 sides of rectangle\n");
	scanf("%d%d",&l,&b);
	printf("Area of rectangle %d\n",area(l,b));
	printf("Perimeter of rectangle %d",peri(l,b));
	return 0;
}
