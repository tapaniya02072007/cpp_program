#include<iostream.h>
#include<conio.h>
int main()
{
	int i;
	clrscr();
	cout <<"i an integer:";
	cin >>i;

	{
		if(i%2==0)
		{
			cout <<"even:"<<i<<endl;
		} else {
			cout <<"odd:"<<i<<endl;
		}

	}
	getch();
	return 0;
}