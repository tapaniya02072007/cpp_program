#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	textbackground(BROWN);
	for(i=1; i<=100; i++)
	{
		//FIRST
		textcolor(YELLOW);
		cprintf(" HAPPY ");

		//SECOND
		textcolor(BLUE);
		cprintf(" BIRTHDAY ");

		//HEART IN RED
		textcolor(RED);
		cprintf(" \3 ");
		delay(200);
	}
	getch();
}