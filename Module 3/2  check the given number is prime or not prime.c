#include<stdio.h>
void main()
{
	int a,b,c=2,flag=0;
	printf("Enter Number : ");
	scanf("%d",&a);
	while(c<a)
	{
		b=a%c++;
		if(b==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d Number Is Prime",a);
	}
	else
	{
		printf("%d Numer Is Not Prime",a);
	}
}
