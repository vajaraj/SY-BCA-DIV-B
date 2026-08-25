#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void swap(int,int);
void swap1(int *,int *);
void main()
{
	int a,b;
	clrscr();
	cout<<"Entertwo number :";
	cin>>a>>b;
	cout<<"\n Before swap()a="<<a<<"\t b="<<b;
	swap(a,b);
	cout<<"\n After swap()a="<<a<<"\t b="<<b;
	cout<<"\n Before swap1()a="<<a<<"\t b="<<b;
	swap1(&a,&b);
	cout<<"\n After swap1()a="<<a<<"\t b="<<b;
	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"\n Inside swap()a="<<a<<"\t b="<<b;
}
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\n Inside swap1()a="<<*a<<"\t b="<<*b;
}