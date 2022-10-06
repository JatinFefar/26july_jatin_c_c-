#include<stdio.h>
int main()
{
	char *a[20];
	char *b[20];
	int c; 
	printf("\nEnter the 1st string- ");
	scanf("%s",&*a);
	printf("\nEnter the 2nd string- ");
	scanf("%s",&*b);
	printf("\nYour value is ");
	for (c=0; c<2; c++)
	{
		printf("%s",a);
		*a=*b;	
	}
}
