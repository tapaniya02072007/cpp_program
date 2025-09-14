#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a,b;
	emp(){}
	emp(int x, int y)
	{
		a=x;
		b=y;
	}
	emp(emp &r)
	{
		a=r.a;
		b=r.b;
	}
	public:void display()
	{
		cout<<"a==="<<a<<endl;
	}
};
int main()
{
	clrscr();
	emp e1,e2;
	e1=emp(20,30);
	e1.display();
	e2=emp(e1);
	e2.display();

	getch();
	return 0;
}