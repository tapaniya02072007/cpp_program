// pointer to member

#include<iostream.h>
#include<conio.h>
class emp
{
	public:int a;
	public:void fun(int x)
	{
		cout<<"member function:-"<<x<<endl;
	}
};
int main()
{
	int emp::*p=&emp::a;
	void(emp::*ptr)(int)=&emp::fun;
	emp e;
	e.*p=10;
	cout<<"data member:-"<<e.*p<<endl;
	(e.*ptr)(20);

	getch();
	return 0;
}

