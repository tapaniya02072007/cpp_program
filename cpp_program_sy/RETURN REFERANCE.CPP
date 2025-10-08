//return referance
#include<iostream.h>
#include<conio.h>
class test
{
	public:int x;
	test & set(int a)
	{
		x=a;
		return *this;
	}
	void print()
	{
		cout<<"x="<<x;
	}
};
void main()
{
	clrscr();
	test obj;
	obj.set(10);
	obj.print();
	getch();
}
