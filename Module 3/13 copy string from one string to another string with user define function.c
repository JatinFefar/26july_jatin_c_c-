#include<stdio.h>
#include<string.h>
int Enterdata ()
{
	char A[10];
	char B[10];
	printf("\n Enter 1st String name");
	scanf("%s",&A);
	strcpy(B,A);
}
int printdata ()
{
	char B[10];
	printf("\n String 2nd is copied from 1st string.");
	printf("\n 2nd String name is %s",B);	
}
int main()
{
	Enterdata ();
	printdata ();
}
