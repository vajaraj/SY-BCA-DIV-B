#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	float *p,sum=0,*q;
	int n,i;
	clrscr();
	cout<<"Enter N :";
	cin>>n;

	p=new float [n];
	q=p;

	for(i=0; i<n; i++)
	{
		cout<<"Enter Value-"<<i+1<<":";
		cin>>p[i];
	}
	for(i=0; i<n; i++)
	{
		cout<<endl<<*p;
		sum+=*p;
		p++;
	}
	cout<<"\n Sum="<<sum;
	delete[]p,q;
	getch();
}