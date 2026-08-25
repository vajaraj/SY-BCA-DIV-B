#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int a,b,temp;
    clrscr();
    cout<<"ENTER VALUE FOR A:";
    cin>>a;
    cout<<"ENTER VALUE FOR B:";
    cin>>b;

    temp=a;
    a=b;
    b=temp;
    cout<<"VALUE OF A:"<<a;
    cout<<"\nVALUE OF B:"<<b;
    getch();
}