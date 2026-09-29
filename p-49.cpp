//overload  unary increment & decrement operator
#include<iostream.h>
#include<conio.h>
class A
{
     int a,b;
     public:
	   void get()
	   {
	       cout<<"Enter two Numbers:";
	       cin>>a>>b;
	   }
	   void put()
	   {
	      cout<<"\nA="<<a<<"\tB="<<b;
	   }
	   void operator ++();
	   friend void operator --(A & a1);
};
void A :: operator ++()
{
   a=++a;
   b=++b;
}
void operator --(A & a1)
{
   a1.a=--a1.a;
   a1.b=--a1.b;

}
void main()
{
     A a1;
     clrscr();
     a1.get();
     a1.put();
     ++a1;
     a1.put();
     --a1;
     a1.put();
     getch();
}