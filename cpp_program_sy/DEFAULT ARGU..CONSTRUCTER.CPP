//default argument constructer

#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a;
	emp(int x=0)
	{
		a=x;
	}
	public:void show()
	{
		cout <<"a==="<<a<<endl;
	}
};
int main()
{
	clrscr();
	emp e1(40);
	e1.show();

	getch();
	return 0;
}
