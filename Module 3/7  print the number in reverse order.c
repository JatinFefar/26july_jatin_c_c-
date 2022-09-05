#include<stdio.h>
void main()
{
	int a,b=0,c,d;
	printf("Enter Number To Summation :");
	scanf("%d",&a);
	for(d = 1; d < 10; d++)
	{
		c=a%10;
		b+=c;
		a/=10;
		if(a==0)
		{
			d=10;
			printf("Summation is : %d",b);
		}
	}
}
