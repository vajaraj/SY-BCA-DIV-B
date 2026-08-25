#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
  int n,i;
  clrscr();
  cout<<"Enter a Number :";
  cin>>n;
  for(i=1; i<=10; i++)
  {
	cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
  }
  getch();
}