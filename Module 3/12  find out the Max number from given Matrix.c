#include<stdio.h>
int main()
{
	int a[5][5];
	int b=0,c=0,d,e;
	printf("\n  Enter the Row and column \n");
	printf("\nEnter your Row :-");
	scanf("%d",&d);
	printf("Enter your column :-");
	scanf("%d",&e);
	printf("\n Enter the number of array. \n\n");
	do
	{
		do
		{
		printf(" %d Enter the number a[%d][%d] :-  ",b+1,b,c);
		scanf ("%d",&a[b][c]);
		c++;
		}
		while(c<e);
		b++;
		c=0;
	}
	while(b<d);
    
	for (b=0; b<d; b++)
	{
		for (c=0; c<e; c++)
		{
			if (a[b][c]>a[0][0])
			{
			a[0][0]=a[b][c];
			}
		}
	}
	printf("\nYour max matrics value is %d ",a[0][0]);
}
