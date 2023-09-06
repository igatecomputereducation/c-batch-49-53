#include<stdio.h>
int main()
{
	int num;
	num=456;
	printf("%d\n",num);
	printf("%u\n",&num);
	printf("%d",*(&num));
	return 0;
}
