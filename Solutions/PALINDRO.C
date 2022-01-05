//wap to enter any number and check number is palindrome or not//
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rev=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n/=10;
	}
	if(rev==num)
	{
		printf("%d it is palindrome",num);
	}
	else
	{
		printf("%d it is not palindrome",num);
	}
	getch();
}