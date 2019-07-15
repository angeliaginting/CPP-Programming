#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char jawab;
    int awal, akhir;

    do{
        system("cls");
        cout << "Masukkan nilai awal : ";cin >> awal;
        cout << "Masukkan nilai akhir : ";cin >> akhir;
        for(awal; awal<=akhir; awal++){
            cout << awal << " Perulangan Campuran" << endl;
        }
    cout << "\nApakah Ingin Ulang Lagi [y/n]?";cin>>jawab;
    }while(jawab == 'y' || jawab == 'Y');

    return 0;
}
