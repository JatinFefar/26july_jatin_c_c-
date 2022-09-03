#include<stdio.h>
#define pi 3.14
void main()
{
	int s,bt,ht,lr,br,rc;
	printf("\nSelection 1 = Area Of Triangle .");
	printf("\nSelection 2 = Area Of Rectangle .");
	printf("\nSelection 3 = Area Of Circle .");
	printf("\nEnetr Selection To Area Of Trinangle, Rectangle and Circle : ");
	scanf("%d",&s);
	
	switch (s)	
	{
		case 1:
			printf("\n Enter The Base Of Triangle :");
			scanf("%d",&bt);
			printf("\n Enter Hight Of Triangle :");
			scanf("%d",&ht);
			printf("\n-->Area Of Triangle Is :%f",0.5*bt*ht);
			break;
		
		case 2:
			printf("\n Enter Length Of Rectangle :");
			scanf("%d",&lr);
			printf("\n Enter Breadth Of Rectangle :");
			scanf("%d",&br);
			printf("\n-->Area Of Rectangle Is :%d",lr*br);
			break;
		
		case 3:
			printf("\nEnter The Radious Of Circle :");
			scanf("%d",&rc);
			printf("\n-->Area Of Circle Is :%f",(pi*rc*rc));
			break;
		
		default:
			printf("Enter Vaild Selection..");
			break;
	}
}
