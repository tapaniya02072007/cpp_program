#include<iostream.h>
#include<conio.h>
int polimorphisam (int p)
{
	return p;
}
int polimorphisam (int p,int o)
{
	return p+o;
}
int polimorphisam (float p,float o)
{
	return p+o;
}
int main()
{
	clrscr();
	cout<<"Functuion 1 : "<<polimorphisam(10)<<endl;
	cout<<"Functuion 2 : "<<polimorphisam(10,5)<<endl;
	cout<<"Functuion 3 : "<<polimorphisam(1.6f,1.2f);
	getch();
	return 0;
}