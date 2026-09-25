//OVERELOAD UNARY OPEATOR USING OPREATER

#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public :
		void get ()
		{
			cout<<"\n Enter Two Number :";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n A : "<<a<<"\t B : "<<b;
		}
	       friend void operator -(A & a1);
};
void operator -(A & a1)
{
	a1.a=-a1.a;
	a1.b=-a1.b;
}
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	-a1;
	a1.put();
	getch();
}