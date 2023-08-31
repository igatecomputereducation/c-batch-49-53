#include<stdio.h>
extern int num;
void subfunc();
int main()
{
	printf("%d\n",num);
	num=num+5;
	subfunc();
	printf("%d\n",num);
	return 0;
}
int num=10;
void subfunc()
{
	printf("%d\n",num);
	num=num+5;
}
