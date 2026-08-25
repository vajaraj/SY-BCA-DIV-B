#include<iostream.h>
#include<conio.h>
inline int add(int a,int b)
{
	return (a+b);
}

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter Two Number :";
	cin>>a>>b;
	cout<<"\n Sum="<<add(a,b);
	getch();
}