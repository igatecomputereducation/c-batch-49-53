#include<stdio.h>
int ismajor(char,int);
int main()
{
	char gen;
	int age;
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%d",&age);
	if(ismajor(gen,age))
		printf("Major");
	else
		printf("Minor");
	return 0;
}
int ismajor(char gen,int age)
{
	return (gen=='m' && age>=21 || gen=='f' && age>=18);
}
