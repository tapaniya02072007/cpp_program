#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	for(a=0; a<=5; a++)
	{
		for(b=0; b<=12; b++)
		{
			if(a==0||a==5||b==0||b==12)
			   cout <<"#";
			else
			   cout <<" ";
		}
		cout <<endl;
	}
	getch();
	return 0;
}