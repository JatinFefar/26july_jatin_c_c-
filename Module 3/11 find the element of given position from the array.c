#include<stdio.h>
int main()
{
    int a[20];
    int b,c,d;
    printf("Enter number you want to print :");
    scanf("%d",&b);
        for(c=0; c<b; c++)
        {
            printf("Enter element number a[%d]  ",c);
            scanf("%d",&a[c]);
        }
    printf("Enter element number ");
    scanf("%d",&d);
        for(c=0; c<b; c++)
        {
            if (a[c]==d)
            {
                printf("Your element is %d",c+1);
            }
        }
}
