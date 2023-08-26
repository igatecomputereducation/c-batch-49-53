#include<stdio.h>
void subfunc();
int main()
{
	int num=230;
	subfunc();
	return 0;
}
void subfunc()
{
	printf("%d",num);
}
