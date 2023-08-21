#include<stdio.h>
int volume(int,int,int);
int main()
{
	int bre,wid,hei,vol;
	printf("Enter 3 sides of a box\n");
	scanf("%d%d%d",&bre,&wid,&hei);
	vol=volume(bre,wid,hei);
	printf("Volume of box %d",vol);
	return 0;
}
int volume(int b,int w,int h)
{
	return b*w*h;
}
