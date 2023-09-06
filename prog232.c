#include<stdio.h>
int main()
{
	int num=567;
	int *p;
	p=&num;
	printf("%d\n",num);
	printf("%d\n",*(&num));
	printf("%d",*p);
	return 0;
}
