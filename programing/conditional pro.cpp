#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,max;
	clrscr();
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	max=(x>y)?x:y;
	printf("max value is=%d",max);
	printf("size of max =%d byte",sizeof(max));
	getch();	
}
