//multiple inheritance

#include<iostream.h>
#include<conio.h>
class A
{
	protected:
	int x;
	public:
	int y;
};
class B
{
	protected:
	int z;
};
class C: public A, public B
{
	public:
	void show()
	{
		cout <<"\n\nC class:\n";
		cout <<"\nx:"<<x<<"\ny:"<<y<<"\nz:"<<z;
	}
	void assign()
	{
		x=10;
		y=200;
		z=3000;
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

