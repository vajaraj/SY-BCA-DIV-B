#include<iostream.h>
#include<conio.h>
void fun(int a,float b)
{
	cout<<"Function 1";
}
void fun (float a, int b)
{
	cout<<"Function 2";
}
void main()
{
	clrscr();
	fun(10,10);
	getch();
}