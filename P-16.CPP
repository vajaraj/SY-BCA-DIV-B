#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
    int a=153,p=0,n=a,r=0,last=0;
    clrscr();
    while(n!=0)
    {
       n=(n/10);
       p++;
    }
    n=a;
       while(n!=0)
       {
	last=n%10;
	r=(r+pow(last,p));
	n=(n/10);
       }
       if(r==a)
       {
	    cout<<"\n  NUMBER IS  ARMSTRONG";
       }
       else
       {
		cout<<"\n NUMBER IS NOT  ARMSTRONG";
    }
    getch();
}
