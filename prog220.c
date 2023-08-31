#include<stdio.h>
#define out printf
#define in scanf
int main()
{
	int a,b,c;
	out("First number:");
	in("%d",&a);
	out("Second number:");
	in("%d",&b);
	c=a+b;
	out("Addition %d",c);
	return 0;
}
