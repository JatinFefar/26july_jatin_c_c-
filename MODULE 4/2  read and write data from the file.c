#include<stdio.h>
#include<stdlib.h>
int main ()
{
	FILE *A;
	int a = 3000;
	A = fopen ("D:/MODULE 4/Read_Write_data.txt","w");
	fprintf(A,"%d",a);
	fclose(A);
	A = fopen ("C:/Users/jatin/Desktop/Read_Write_data.txt","r");
	fscanf(A,"%d",&a);
	printf("Your value is %d",a);
	fclose(A);
	return 0;
}

