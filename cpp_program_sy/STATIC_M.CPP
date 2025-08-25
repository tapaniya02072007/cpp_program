//static member funtion

#include<iostream.h>
#include<conio.h>
class demo
{
	private: static int a;
	private: static int b;
	public: static void fun()
	{
		cout <<"value===a:-"<<a<<endl;
		cout <<"value===b:-"<<b<<endl;
	}
};
int demo::a=10;
int demo::b=20;
int main()
{
	clrscr();
	demo d1;
	cout <<"normal calling"<<endl;
	d1.fun();
	cout <<"static calling"<<endl;
	demo::fun();
	getch();
	return 0;

}