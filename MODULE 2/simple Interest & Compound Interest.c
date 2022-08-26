#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,ci,si;
	printf("enter ur principal : ");
	scanf("%f",&a);
	printf("\nenter ur interest : ");
	scanf("%f",&b);
	printf("\nenter ur period : ");
	scanf("%f",&c);
	si=(a*b*c)/100;
	printf("\nsimple interest is:%f",si);
	ci=a*pow((1+(b/100)),c);
	ci-=a;
	printf("\n\ncompound interest :%f",ci);
}
