#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public :
		void get()
		{
			cout<<"Enter A :";
			cin>>a;
		}
		void put()
		{
			cout<<"\n A : "<<a;
		}
		void change() const
		{
		//	a++
			cout<<"\n Can Not Change Value ";
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	a1.change();
	getch();
}