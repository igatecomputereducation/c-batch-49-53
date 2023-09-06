#include<stdio.h>
void circle(int,float*,float*);
int main()
{
	int rad;
	float area,cir;
	printf("Radius:");
	scanf("%d",&rad);
	circle(rad,&area,&cir);
	printf("Area %f\n",area);
	printf("Circumference %f",cir);
	return 0;
}
void circle(int r,float *a,float *c)
{
	*a=3.14*r*r;
	*c=2*3.14*r;
}
