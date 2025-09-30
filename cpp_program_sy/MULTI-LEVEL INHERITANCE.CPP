// multi-level inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	protected:
	int y;
	public:
	int z;
	void jt()
	{
		cout <<"\nx:"<<x;
	}
	A()
	{
		x=700;
	}
};
class B: public A
{
	public:
	void show()
	{
		jt();
		cout <<"\ny:"<<y<<"\nz:"<<z;
	}
};
class C: public B
{
	public:
	void assign()
	{
		y=300;
		z=500;
	}
};
void main()
{
	 clrscr();
	 C o_c;
	 o_c.assign();
	 o_c.show();

	 getch();
}


