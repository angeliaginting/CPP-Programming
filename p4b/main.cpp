#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    i=1;

    //Perulangan while menaik
    while(i<=10){
        cout << i << " Perulangan While Menaik" << endl;
        i++;
    }

    cout << endl;

    //Perulangan while menurun
    while(i>=1){
        cout << i << " Perulangan While Menurun" << endl;
        i--;
    }

    getch();
    return 0;
}
