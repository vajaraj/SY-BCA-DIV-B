#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int n=121,rev=0,orn=n,last=0;
    clrscr();
    while(n!=0)
    {
       last=(n%10);
       rev=(rev*10)+last;
       n=n/10;
    }
       if(orn==rev)
       {
	    cout<<"\n PALIMDROME NUMBER";
       }
       else
       {
		cout<<"\n NUMBER IS NOT PALIMDROME NUMBER";
    }
    getch();
}
