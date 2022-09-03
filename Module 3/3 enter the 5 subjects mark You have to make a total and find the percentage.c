#include<stdio.h>
void main()
{
	float c,e,g,m,s;
	float u;
	printf("\n Enetr Computer Mark : ");
	scanf("%f",&c);
	printf("\n Enetr English Mark : ");
	scanf("%f",&e);
	printf("\n Enetr Gujrati Mark : ");
	scanf("%f",&g);
	printf("\n Enetr Maths Mark : ");
	scanf("%f",&m);
	printf("\n Enetr sanskrit Mark : ");
	scanf("%f",&s);
	
	u=((c+e+g+m+s)*100)/500;
	printf("Your Percentage Is : %f",u);
	
	if(u>75)
		printf("\n You Are Distinction .");
	else if((u>60)&&(u<=75))
		printf("\n You Are First Class .");
	else if((u>50)&&(u<=60))
		printf("\n You Are Second Class .");
	else if((u>35)&&(u<=50))
		printf("\n You Are Pass Class .");
	else
		printf("\n You Are Fail .");	
}
