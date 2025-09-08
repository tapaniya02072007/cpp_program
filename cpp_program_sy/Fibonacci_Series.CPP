//1-10 Fibonacci Series (ex., 0 1 1 2 3 5 8 13 21 34 )
#include <iostream.h>
#include <conio.h>
using namespace std;
int main (){
    int x = 0,y = 1,z;
    clrscr();
    cout << x << " " <<y;
    for(int i=3; i<=10 ; i++){
        z = x+y;
        cout << " " << z ;
        x = y;
        y = z;
    }
    getch();
    return 0;
}