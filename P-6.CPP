#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int a,b,n,ans;
    clrscr();
    cout<<"Enter Value For A:";
    cin>>a;
    cout<<"Enter Value For B:";
    cin>>b;
    cout<<"\n Menu \n1-Sum \n 2-Sub \n 3-Mul \n 4-Dic\n";
    cout<<"Enter Your Choice :";
    cin>>n;
    switch(n)
    {
	case 1:
		ans=a+b;
		cout<<"Sum of value :"<<ans;
		break;
	case 2:
		ans=a-b;
		cout<<" sub of value :"<<ans;
		break;
	case 3:
		ans=a*b;
		cout<<" mul of value :"<<ans;
		break;
	case 4:
		ans=a/b;
		cout<<" div of value :"<<ans;
		break;
	default :
	cout<<"enrte valid choice";
	break;
    }
    getch();
}