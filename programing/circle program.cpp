#include<stdio.h>
#include<conio.h>
void main()
{
	float r,a,c;
	printf("enter the radius of circle");
	scanf("%f",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("Area=%f",a);
	printf("\ncircum=%f",c);
	getch();
}
