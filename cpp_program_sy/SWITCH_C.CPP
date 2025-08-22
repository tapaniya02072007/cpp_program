#include<iostream.h>
#include<conio.h>
int main()
{
	int day;
	clrscr();
	cout <<"enter a number(1 to 7):"<<endl;
	cin >>day;

	switch(day)
	{
		case 1:
		cout <<"monday";
		break;

		case 2:
		cout <<"tuesday";
		break;

		case 3:
		cout <<"wendnesday";
		break;

		case 4:
		cout <<"thursday";
		break;

		case 5:
		cout <<"friday";
		break;

		case 6:
		cout <<"saturday";
		break;

		case 7:
		cout <<"sunday";
		break;

		default:
		cout <<"no day's";
	}
	getch();
	return 0;
}
