#include<stdio.h>
#include<conio.h>
int main()
{
	int m;
	printf("enter the marks");
	scanf("%d",&m);
	if("m>=60")
	printf("first division");
	 else if ("m>=45")
	printf("second division");
	 else if ("m>=30")
	printf("third division");
	else
	printf("fail");
	getch();
}
