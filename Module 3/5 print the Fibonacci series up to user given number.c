#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("Enter Number Up To Print Series .");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d,  %d, ",a,b);
	
	while(c<n)
	{
		c=a+b;
		if(c<n)
		{
			printf(" %d, ",c);
		}
		a=b;
		b=c;
		c++;
	}
}
