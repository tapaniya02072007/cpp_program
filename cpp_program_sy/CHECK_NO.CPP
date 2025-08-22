#include<iostream.h>
#include<conio.h>
int main()
{
	int j,t;
	clrscr();
	cout <<"Enter 2 number and check that is Opposite or not (ex.NO.1 = 7 and NO.2 = -7 that means opposite) "<<endl<<endl;
	cout << "Enter Value of NO.1 : ";
	cin >>j;
	cout << "Enter Value of MO.2 : ";
	cin >>t;
	if(j == 0 && t == 0)
	{
		cout <<endl<<"Warning : \"Don't enter 0(zero) \"";
	}
	else
	{
		if(j + t == 0)
		{
			cout <<endl<<"Number is opposite ";
		}
		else
		{
			cout <<endl<<"Number is not opposite";
		}
	}

	getch();
	return 0;
}