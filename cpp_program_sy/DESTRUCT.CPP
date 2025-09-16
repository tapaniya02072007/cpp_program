// destructer

#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a,b;
	emp(int x, int y)
	{
		a=x;
		b=y;
	}
	public:void display()
	{
		cout<<"a=="<<a<<endl;
		cout<<"b=="<<b;
	}
	~emp()
	{
		cout<<"destructer";
	}
};
int main()
{
	emp e(88,99);
	e. display();

	getch();
	return 0;
}
