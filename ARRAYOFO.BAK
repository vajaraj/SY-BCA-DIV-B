//array of object & array within a class

#include<iostream.h>
#include<conio.h>

class Result
{
	int rn;
	char nm[20];
	int m[3];
	int total;
	public :
		void get();
		void put();
};
void Result ::get()
{
	cout<<"Enter Roll No , Name And Marks Of 3 Subject :";
	cin>>rn>>nm;
	total=0;
	for(int i=0; i<3; i++)
	{
		cin>>m[i];
		total+=m[i];
	}
}
void Result :: put()
{
	cout<<endl<<rn<<"\t"<<nm;
	for(int i=0; i<3; i++)
	cout<<"\t"<<m[i];
	cout<<"\t"<<total;
}
void main()
{
	Result r[5];
	clrscr();
	for(int i=0; i<5; i++)
	r[i].get();
	cout<<"\n Rno \t Name \t m1 \t m2 \t m3 \t Total";
	for(i=0; i<5; i++)
	r[i].put();
	getch();
}