//OVERELOAD UNARY OPEATOR USING MEMBER FUNCTION

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
		void operator -();
};
void A ::operator -()
{
	a=-a;
	b=-b;
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