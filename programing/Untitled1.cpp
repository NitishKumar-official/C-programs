#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter first and second number");
	scanf("%d,%d,&a,&b");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value after swaping");
	printf("A=%d",a);
	printf("B=%d",b);
	getch();
}
