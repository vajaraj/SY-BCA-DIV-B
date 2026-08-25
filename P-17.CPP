#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
	int bin,dec=0,base=1,rem;
	clrscr();
	cout<<"Enter a Binary Number :";
	cin>>bin;
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+rem*base;
		base=base*2;
		bin=bin/10;
	}
	cout<<dec;
	getch();
}