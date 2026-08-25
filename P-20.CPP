#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,a,n,sum=1;
	clrscr();
	cout<<"Enter a number :";
	cin>>a;
	cout<<"Enter a Power :";
	cin>>n;
	for(i=0; i<n; i++)
	{
	       sum=sum*a;
	}
	cout<<sum;
	getch();
}