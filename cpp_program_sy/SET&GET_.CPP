#include<iostream.h>
#include<conio.h>
class emp
{
	private: int a,b,c;
	public: int d,e;

	void setdata(int a1, int b1, int c1);
	void getdata()
	{
		cout <<"a=="<<a<<endl;
		cout <<"b=="<<b<<endl;
		cout <<"c=="<<c<<endl;
		cout <<"d=="<<d<<endl;
		cout <<"e=="<<e<<endl;
	}
};
void emp::setdata(int a1, int b1, int c1)
{
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	clrscr();
	emp e1;
	e1.d=40;
	e1.e=50;
	e1.setdata(10,20,30);
	e1.getdata();

	getch();
	return 0;
}