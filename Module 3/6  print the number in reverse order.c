#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter Number To print Reverse Order : ");
	scanf("%d",&a);
	for(d = 0; d < 10; d++)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
		if(a==0)
		{
			d=10;
		}
		if(d==10)
		{
			printf("\n Reverse Order Number :%d",c);
		}
	}
}
