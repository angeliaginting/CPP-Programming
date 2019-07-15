#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int awal, akhir, aw, ak;

    //while menaik
    cout << "Masukkan data awal : ";cin>>awal;
    cout << "Masukkan data akhir : ";cin>>akhir;

    while(awal<=akhir){
        cout << awal << " Perulangan While Menaik" << endl;
        awal++;
    }

    //while menurun
    cout << "Masukkan data awal : ";cin>>aw;
    cout << "Masukkan data akhir : ";cin>>ak;

    while(ak>=aw){
        cout << ak << " Perulangan While Menurun" << endl;
        ak--;
    }

    getch();
    return 0;
}
