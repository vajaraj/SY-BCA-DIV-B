#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int num,sum=0;
	clrscr();
	cout<<"enter a number :";
	cin>>num;
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	cout<<"sum of digits="<<sum;
	getch();
}