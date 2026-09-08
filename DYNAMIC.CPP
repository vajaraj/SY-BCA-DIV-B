#include<iostream.h>
#include<conio.h>
#include<math.h>
class c1
{
	float p,r,amt;
	int n;
	public:
		c1(float p1, int n1,float r1)
		{
			cout<<"\n Float ,int , Rate";
			p=p1;
			n=n1;
			r=r1;
			float t1=1 +r;
			float t2=pow(t1,n);
			amt=p*t2-p;
		}
		c1(float p1, int n1,int r1)
		{
			cout<<"\n int ,int , Rate";
			p=p1;
			n=n1;
			r=r1;
			float t1=1 +r/100;
			float t2=pow(t1,n);
			amt=p*t2-p;
		}
		void disp()
		{
			cout<<"\n P="<<p;
			cout<<"\n R="<<r;
			cout<<"\n N="<<n;
			cout<<"\n CI="<<amt;
		}
	};
void main()
{
	float p=1000,r=0.10;
	int r1=10,n=10;
	clrscr();
	c1 ci1(p,n,r1);
	c1 ci2(p,n,r);
	ci1.disp();
	ci2.disp();
	getch();
}