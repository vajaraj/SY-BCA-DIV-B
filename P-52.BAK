//OVERLOAD OPERATOR + AND = FOR STRING

#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	int len;
	char *nm;
	public :
		string()
		{
			len=0;
			nm=new char[len+1];
		}
		string (char *s)
		{
			len=strlen(s);
			nm=new char[len+1];
			strcpy(nm,s);
		}
		void put()
		{
			cout<<"\n Name :"<<nm;
		}
		friend string operator+(string s1,string s2);
		int operator==(string);
};
string operator+(string s1, string s2)
{
	string s3;
	s3.len=s1.len+s2.len;
	s3.nm=new char[s3.len+1];
	strcpy(s3.nm,s1.nm);
	strcat(s3.nm,s2.nm);
	return(s3);
}
int string::operator==(string s2)
{
	if(strcmp(nm,s2.nm)==0)
	return 1;
	else
	return 0;
}
void main()
{
	char nm1[20],nm2[20];
	clrscr();
	cout<<"\n Enter Two String :";
	cin>>nm1>>nm2;
	string s1(nm1),s2(nm2),s3;
	s3=s1+s2;
	s1.put();
	s2.put();
	s3.put();
	if(s1==s2)
	cout<<"\n SAME";
	else
	cout<<"\n NOT SAME ";
	getch();
}