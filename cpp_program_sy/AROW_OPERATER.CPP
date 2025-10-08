//arow operater
#include<iostream.h>
#include<conio.h>
class test
{
	public:
	int x;
	void set(int x)
	{
		this->x=x;
		cout <<"x="<<x;
	}
};
void main()
{
	test obj;
	obj.set(50);
	getch();
}
