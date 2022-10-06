#include<stdio.h>
int main ()
{
	int *a,*b;
	int c,d,e;
	printf("\nEnter first number :- ");
	scanf("%d",&c);
	printf("Enter second number :- ");
	scanf("%d",&d);
	a=&c;
	b=&d;
	e = *a + *b ;
	printf("\nYour addition is %d.",e);	
}
