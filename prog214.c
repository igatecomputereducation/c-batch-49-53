#include<stdio.h>
int x=10;
void display();
int main()
{
	printf("%d\n",x);
	display();
	printf("%d\n",x);
	return 0;
}
void display()
{
	x=x+5;
}
