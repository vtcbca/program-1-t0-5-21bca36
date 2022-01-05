//wap to enter any number and check it is prime no. or not//
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
		i=2+1;
	}
	if(c==1)
	{
		printf("Number is not prime");
	}
	else
	{
		printf("Number is prime");
	}
	getch();
}
