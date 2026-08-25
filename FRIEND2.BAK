#include<iostream.h>
#include<conio.h>

class B;  //forward


class A
{
	int a;
	public :
		void get()
		{
			cout<<"\n Enter A Number :";
			cin>>a;
		}
		void put()
		{
			cout<<"\n A="<<a;
		}
		friend int sum(A x, B y);
};
class B
{
	int b;
	public :
		void get()
		{
			cout<<"\n Enter a Number :";
			cin>>b;
		}
		void put()
		{
			cout<<"\n B :"<<b;
		}
		friend int sum(A x,B y);
};
int sum(A x,B y)
{
	return (x.a + y.b);
}
void main()
{
	A a1;
	B b1;
	clrscr();
	a1.get();
	b1.get();
	a1.put();
	b1.put();
	cout<<"\n SUM : "<<sum(a1,b1);
	getch();
}