#include<stdio.h>
#include<conio.h>
int main()

{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,key,index=-1;
	clrscr();
	std::cout<<"Enter Element To Search :";
       std::cin>>key;
	for(i=0; i<n; i++)
	{
		if(arr[i]==key)
		{
			index=i;
			break;
		}
	}
	if(index !=-1)
		cout<<"Element Found At Index :"<<std::index<<endl;
	else
		cout<<"Element Not Found!"<<std::endl;
	return 0;
}