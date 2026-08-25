#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int n,i,f,first=0,secound=1,next;
    clrscr();
    cout<<"enter number:";
    cin>>n;
    for(i=0; i<n; i++)
    {
	if(i<=1)
	{
		next=i;
	}
       else
       {
		next=first+secound;
		first=secound;
		secound=next;
       }
	cout<<"\t"<<next;
    }
    getch();
}