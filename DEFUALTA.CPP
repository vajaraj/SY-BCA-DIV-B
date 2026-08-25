#include<iostream.h>
#include<conio.h>
int add(int x,int y=20);

void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter Two Number :";
	cin>>x>>y;
	z=add(x,y);
	cout<<"\n Sum Without Defalut:"<<z;
	z=add(x);
	cout<<"\n Sum With Defalut:"<<z;
	getch();
}
int add(int x,int y)
{
	return (x+y);
}