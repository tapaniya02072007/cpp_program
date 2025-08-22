#include<iostream.h>
#include<conio.h>
int main(int argc, char *argv)
{
	cout <<"total number of argument==="<<argc<<endl;
	cout <<"program name==="<<argc<<endl;

	for (int i=0; i<argc; i++)
	{
		cout <<argv[i] <<endl;
	}
	cout <<"total number of argument==="<<argc;

	getch();
	return 0;
}
