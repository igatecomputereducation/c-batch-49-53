#include<stdio.h>
int addition(int,int,int);
int main()
{
	int a,b,c,s;
	a=34;
	b=25;
	c=60;
	s=addition(a,b,c);
	printf("Addition %d",s);
	return 0;
}
int addition(int x,int y,int z)
{
	return x+y+z;
}



