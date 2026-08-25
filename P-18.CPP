#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i ,dec,bin[32],ind=0;
	clrscr();
	cout<<"Enter A Decimal Number :";
	cin>>dec;
	if(dec==0)
	{
		cout<<"Binary :0";
	}
	while(dec>0)

	{
		bin[ind]=dec%2;
		dec=dec/2;
		ind++;
	}
	cout<<"Binary :";
	for(i=ind-1; i>=0; i--)
	{
		cout<<bin[i];
	}
	getch();
}
