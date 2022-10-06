#include<stdio.h>
int A,B,C=1;
int Dynamicvalue ()
{
	printf("\nEnter Any number to get Factorial- ");
	scanf("%d",&A);
}
int Printvalue ()
{
	for(B=A; B>0; B--)
	{
		C*=B;
	}
	printf("\nYour number Factorial is %d.",C);
}
int main ()
{
	Dynamicvalue ();
	Printvalue ();
}
