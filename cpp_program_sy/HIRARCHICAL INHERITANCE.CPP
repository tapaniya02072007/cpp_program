
//hirarchical inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	protected:
	int y;
	public:
	int z;
	void pr()
	{
		cout<<"\nx:"<<x;
	}
	A()
	{
		x=0;
	}
};
class B: public A
{
	public:
	void assign()
	{
		y=37;
		z=72;
	}
	void show()
	{
		cout<<"\n\nB class:\n";
		pr();
		cout<<"\ny:"<<y<<"\nz:"<<z;
	}
};
class C: public A
{
	public:
	void assign()
	{
		y=39;
		z=76;
	}
	void show()
	{
		cout<<"\n\nC class:\n";
		pr();
		cout<<"\ny:"<<y<<"\nz:"<<z;
	}
};
void main()
{
	clrscr();
	B o_b;
	C o_c;

	o_b.assign();
	o_c.assign();
	o_c.show();

	getch();
}


