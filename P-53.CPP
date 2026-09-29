//CONVERSION FROM CLASS TYPE TO BASIC TYPE

#include<iostream.h>
#include<conio.h>
class A
{
	float a,b;
	public :
		void get()
		{
			cout<<"\n ENTER TWO NUMBER :";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n A :"<<a;
			cout<<"\n B :"<<b;
		}
		operator float()
		{
			return (a+b);
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	float sum=a1;//float sum=a1.oprator float()
	cout<<"\n Sum : "<<sum;
	getch();
}