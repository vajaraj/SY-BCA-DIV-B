#include<iostream.h>
#include<conio.h>
void main()
{
	int cnum,min,max;
	clrscr();
	cout<<"Enter -999 To Stop Loop";
	cout<<"\n Enter A Number :";
	cin>>cnum;
	if(cnum==-999)
	{
		cout<<"NO NUMBER ENTERED BEFORE STOP LOOP ";
	}
	min=cnum;
	max=cnum;
	while(1)
	{
		cout<<"\n Enter a Number :";
		cin>>cnum;
		if(cnum==-999)
			break;
		if(cnum>max)
			max=cnum;
		if(cnum<min)
			min=cnum;
	}
	cout<<"\n Minimum Number :"<<min<<endl;
	cout<<"\n Maximum Number :"<<max<<endl;
	getch();
}