//exampleof class(private member function(nesting of member function)

#include<iostream.h>
#include<conio.h>
class Demo
{
	int a ;
	float b;
	char c;
	void get();
	public :
		void put()
		{
			get();
			cout<<"\n A="<<a;
			cout<<"\n B="<<b;
			cout<<"\n C="<<c;
		}
};
void Demo :: get()
{
	cout<<"ENTER AN INT A ,FLOAT AND A CHAR :";
	cin>>a>>b>>c;
}
void main()
{
	Demo d1;
	clrscr();
      //d1.get();
	d1.put();
	getch();
}