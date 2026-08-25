#include<conio.h>
#include<iostream.h>
void main()
{
	int n,m;
	clrscr();
	cout<<"Enter Average marks Of Strudent :";
	cin>>m;
	if(m>=70)
		n=1;
	else if(m>60 & m<70)
		n=2;
	else if(m>50 & m<60)
		n=3;
	else if(m>40 & m<50)
		n=4;
		else
			n=5;
	switch (n)
	{
		case 1 :
			cout<<"DISTINCTION";
			break;
		case 2 :
			cout<<"FIRST CLASS";
			break;
		case 3 :
			cout<<"SECOUND CLASS";
			break;
		case 4 :
			cout<<"PASS";
			break;
		case 5 :
			cout<<"TRY AGAIN";
			break;
	}
	getch();
}