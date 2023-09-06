#include<stdio.h>
#define con(a,b)  a##b
int main()
{
	int firsec=45;
	printf("%d",con(fir,sec));
	return 0;
}
