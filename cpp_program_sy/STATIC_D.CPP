#include<iostream.h>
#include<conio.h>
class emp
{
	static int a;
	public:void fun()
	{
		a++;
		cout <<"value of a==="<<a<<endl;
	}
};
int emp::a;
int main()
{
	clrscr();
	emp e1,e2,e3;
	e1.fun();
	e2.fun();
	e3.fun();
	getch();
	return 0;
}