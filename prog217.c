#include<stdio.h>
void display(int);
int main()
{
	int i;
	for(i=1;i<=5;i++)
		display(i);
	return 0;
}
void display(int x)
{
	static int a=100;
	a=a+x;
	printf("%d\n",a);
}


