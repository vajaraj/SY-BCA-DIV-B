#include<stdio.h>
#include<conio.h>
void main()

{
	FILE *fp;
	char c;
	int i=0,l;
	clrscr();
	fp=fopen("fseek1.txt","r");
	printf("\n");
	while(1)
	{
		fseek(fp,i,SEEK_SET);
		c=fgetc(fp);
		if(feof(fp));
		break;
		printf("%c",c);
		i+=2;
	}
	l=ftell(fp);
	printf("\n FILE length=%d",l);
	fclose(fp);
	getch();
}