#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color B");

    int nilai;

    cout << "Masukkan Nilai: ";cin>>nilai;
    if(nilai >= 50 && nilai <= 100){
        cout << "Anda Lulus";
    }else{
        cout << "Anda Gagal";
    }

    getch();
    return 0;
}
