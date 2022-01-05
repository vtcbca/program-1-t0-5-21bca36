//wap to enter any number and print it in reverse//
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,remainder;
	clrscr();
	printf("Enter an integer:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		rev=rev*10+remainder;
		n/=10;
	}
	printf("Reversed number=%d",rev);
	getch();
}