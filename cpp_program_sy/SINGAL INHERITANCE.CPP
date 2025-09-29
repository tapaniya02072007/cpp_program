//singal inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	int x;
	protected:int b;
	public:int c;
	a()
	{
		x=20;
		cout <<"x=="<<x<<endl;
	}
};
class b:public a
{
	public:void assign()
	{
		b=70;
		c=60;
	}
	public:void show()
	{
		cout <<"b=="<<b<<endl<<"c=="<<c<<endl;
	}
};
int main()
{
	clrscr();
	b o;
	o.assign();
	o.show();

	getch();
	return 0;
}

