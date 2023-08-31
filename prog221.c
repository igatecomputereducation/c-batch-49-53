#include<stdio.h>
#define PI 3.14
int main()
{
	int rad;
	float area,cir;
	printf("Radius:");
	scanf("%d",&rad);
	area=PI*rad*rad;
	cir=2*PI*rad;
	printf("Area %f\n",area);
	printf("Circumference %f",cir);
	return 0;
}
