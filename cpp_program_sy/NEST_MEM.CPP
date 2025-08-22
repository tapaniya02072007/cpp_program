//Nesting member function
#include<iostream.h>
#include<conio.h>
class data{
	public : void fun()
	{
		cout << "1st member function"<<endl;
		display();
	}
	public : void display()
	{
		cout << "2nd member function"<<endl;
		fun();
	}
};
int main()
{
	clrscr();
	data j;//j = Object of class
	j.display();
	getch();
	return 0;

}
