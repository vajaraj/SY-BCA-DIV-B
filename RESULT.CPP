#include<iostream.h>
#include<conio.h>
void main()
{
	int c,cms,s,m=0;
	clrscr();
	cout<<"Enter Mark For C:";
	cin>>c;
	cout<<"Enter Mark For Sql:";
	cin>>s;
	cout<<"Enter Mark For Cms:";
	cin>>cms;
	if(c<40)
	m+=1;
	if(s<40)
	m+=1;
	if(cms<40)
	m+=1;
	if(m==0)
	cout<<"Pass";
	else if(m==1)
	cout<<"ATKT";
	else
	cout<<"Fail";
	getch();
}
