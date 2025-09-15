// member initialization list

#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a,b;
	emp(int x, int y):a(x),b(y){}
	public:void show()
	{
		cout <<"a=="<<a<<endl;
		cout <<"b=="<<b;
	}
};
int main()
{
	clrscr();
	emp e(30,70);
	e.show();

	getch();
	return 0;
}
