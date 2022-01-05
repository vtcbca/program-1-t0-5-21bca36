//wap to enter any number and print it is a armstrong number or not\\
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c=a%10;
		d=d+c*c*c;
		a=a/10;
	}
	if(d==b)
	{
		printf("Number is armstrong");
	}
	else
	{
		printf("Number is not armstrong");
	}
	getch();
}