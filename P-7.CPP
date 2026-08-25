#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int a;
    clrscr();
    cout<<"enter year:";
    cin>>a;
    if(a%4==0)
    {
	cout<<"Year is leap year";
    }
    else
    cout<<"not a leap year";
    getch();
}
