#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public :
		A()
		{
			cout<<"\n DEFUALT CONSTRUCTOR";
			a=0;
			b=0;
		}
		A (int x, int y)
		{
			cout<<"\n PARAMETERIZED CONSTRUCTOR";
			a=x;
			b=y;
		}
		A (A & a1)
		{
			cout<<"\n COPY CONSTRUCTRE";
			a=a1.a;
			b=a1.b;
		}
		void put()
		{
			cout<<"\n A="<<a<<"\t B="<<b;
		}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\n ENTER TWO NUMBER :";
	cin>>x>>y;
	A a1;
	A a2(x,y);
	A a3=a2;
	a1=a2;
	a1.put();
	a2.put();
	a3.put();
	getch();
}