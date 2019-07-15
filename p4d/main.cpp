#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1;

    //doWhile Menaik
    do{
        cout << i << " Perulangan doWhile Menaik" << endl;
        i++;
    }while(i<=10);

    cout << endl;

    //doWhile Menurun
    do{
        cout << i << " Perulangan doWhile Menurun" << endl;
        i--;
    }while(i>=1);

    getch();
    return 0;
}
