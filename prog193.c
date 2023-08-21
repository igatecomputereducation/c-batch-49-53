#include<stdio.h>
void billing(float,int);
int main()
{
	int qty;
	float price;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%d",&qty);
	billing(price,qty);
	return 0;
}
void billing(float p,int q)
{
	float bill=p*q;
	float sgst=bill*14/100;
	float cgst=bill*14/100;
	float tot_bill=bill+cgst+sgst;
	printf("------------------------------\n");
	printf("Price %.2f\n",p);
	printf("Quantity %d\n",q);
	printf("Bill %.2f\n",bill);
	printf("SGST %.2f\n",sgst);
	printf("CGST %.2f\n",cgst);
	printf("Total bill %.2f",tot_bill);
}





