#include<iostream.h>
#include<conio.h>
int main()
{
	int principle_amount, rate_intrest, number_year;
	clrscr();
	cout <<"enter principle amount:-";
	cin >>principle_amount;
	cout <<"enter of intrest:-";
	cin >>rate_intrest;
	cout <<"enter year:-";
	cin >>number_year;

	int si=(principle_amount *rate_intrest *number_year)/100;
	cout <<si;

	getch();
	return 0;
}