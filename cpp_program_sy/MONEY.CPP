#include<iostream.h>
#include<conio.h>
int money(int current_money, float fact=1.4)

     {
		return current_money*fact;
     }
 int main()
  {
	int m=100000;
	clrscr();
	cout<<"with default values"<<money(m)<<endl;
	cout<<"without default values"<<money(m);
	getch();
	return 0;
   }