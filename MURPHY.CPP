#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

    int num,sq,temp,flag;
    clrscr();
    cout << "Enter a Number: ";
    cin >> num;
    sq = num * num;
    temp = num;
    flag=0;
    while (temp > 0)
    {
	if (temp % 10 != sq % 10)
	{
	    temp=1;
	    break;
	}
	 temp /=10;
	 sq /= 10;
    }
    if (flag==0)
    {
	cout << "\n"<< num << " is a Murphy Number"<<endl;
    }
    else
    {
	cout << "\n"<< num << " is NOT a Murphy  Number"<<endl;
    }
    getch();
}