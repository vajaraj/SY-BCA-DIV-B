#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int n,i,c;
    clrscr();
    cout<<"enter a number :";
    cin>>n;
    for(i=2; i<=n/2; i++)
    {
       if(n%i==0)
       {
	c++;
       }
    }
       if(c>0)
       {
	    cout<<"\n  PRIME NUMBER";
       }
       else
       {
		cout<<"\n NOT PRIME NUMBER";
    }
    getch();
}
