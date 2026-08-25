//constant argument

#include<iostream.h>
#include<conio.h>
int sum (int a, const int b);
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Two Number :";
	cin>>a>>b;
	c=sum(a,b);
	cout<<"\n Sum : "<<c;
	getch();
}
int sum (int a, const int b)
{
	int c;
	a++;
      // b++;   // we can not change value of const
	c=a+b;
	return c;
}