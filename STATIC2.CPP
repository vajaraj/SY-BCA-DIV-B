#include<conio.h>
#include<iostream.h>
class A
{
	int a;
	static int b;
	public :
		void get()
		{
			cout<<"\n ENter A :";
			cin>>a;
			b++;
		}
		void put()
		{
			cout<<"\n A="<<a<<"\t B="<<b;
		}
		static void disp()
		{
			cout<<"\n B="<<b;
		}
};
int A::b=10;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();
	a1.put();
	a2.get();
	a2.put();
	a1.disp();
	a3.get();
	a3.put();
	a1.put();
	A::disp();
	getch();
}