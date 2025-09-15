// dynamic initialization of object

#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a;
	emp(){}
	emp(int x)
	{
		a=x;
		cout <<"a=="<<a<<endl;
	}
};
int main()
{
	int data;
	clrscr();
	emp e1;
	cout <<"enter values:-";
	cin >>data;
	e1=emp(data);

	getch();
	return 0;
}
