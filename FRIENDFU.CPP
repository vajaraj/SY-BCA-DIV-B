//example of friend function

#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public :
		void get()
		{
			cout<<"\n Enter A number :";
			cin>>a;
		}
		void put()
		{
			cout<<"\n A="<<a;
		}
	       friend A sum(A x, A y);
};
A sum(A x,A y)
{
	A z;
	z.a=x.a+y.a;
	return (z);
}
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();
	a2.get();

	a3=sum(a1,a2);
	a1.put();
	a2.put();
	a3.put();

	getch();
}