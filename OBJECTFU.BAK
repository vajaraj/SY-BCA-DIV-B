#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	int a,b;
	public :
		void get()
		{
			cout<<" Enter Two Number :";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		void swap1(A a1)
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap2(A & a1)
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap3(A *a1)
		{
			int c=a1->a;
			a1->a=a1->b;
			a1->b=c;
		}
		void swap4(const A&a1)
		{
			cout<<"\n A="<<a1.a<<"\t B="<<a1.b;
		}
		void swap5(const A*a1)
		{
		       cout<<"\n A="<<a1->a<<"\t B="<<a1->b;
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();

	a1.swap1(a1);
	cout<<"\n After Swap1 Pass By Value :";
	a1.put();

	a1.swap2(a1);
	cout<<"\n After Swap2 Pass By Reference :";
	a1.put();

	a1.swap3(&a1);
	cout<<"\n After Swap3 Pass By Pointer :";
	a1.put();

	a1.swap4(a1);
	cout<<"\n After Swap4 Pass By Const Pointer:";
	a1.put();

	a1.swap5(&a1);
	cout<<"\n After Swap5 Pass By Conster Pointer :";
	a1.put();

	getch();
}