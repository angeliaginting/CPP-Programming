#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    system("color E");
    long harga = 0, total, kode, beli;
    char uk, yes;
    string merk;
    int n, x;

    do{
    system("cls");
    cout << "Program Jualan Baju" << endl;
    cout << "Banyak Beli : ";cin >> n;

    for (x = 1; x <= n; x++){
        cout << "\nData Ke - " << x << endl;
        cout <<"Masukkan Kode Baju : ";cin >> kode;
        cout <<"Masukkan Ukuran Baju : ";cin >> uk;

    if(kode == 1){
        merk = "IMP";
        if(uk == 's' || uk == 'S'){
            harga = 200000;
        }else if(uk == 'M' || uk == 'm'){
            harga = 220000;
        }else{
            harga = 240000;
        }
    }else if(kode == 2){
        merk = "Prada";
        if(uk == 's' || uk == 'S'){
            harga = 100000;
        }else if(uk == 'M' || uk == 'm'){
            harga = 110000;
        }else{
            harga = 120000;
        }
    }else if(kode == 3){
        merk = "Gucci";
        if(uk == 's' || uk == 'S'){
            harga = 150000;
        }else if(uk == 'M' || uk == 'm'){
            harga = 160000;
        }else{
            harga = 170000;
        }
    }else{
        merk = "Error";
        cout << "\n == Salah Input Kode Baju == ";
    }

    cout <<"\nMerk \t\t : " <<merk;
    cout <<"\nUkuran \t\t : " <<uk;
    cout <<"\nHarga \t\t : " <<harga;
    cout <<"\nJumlah Beli \t : ";cin >> beli;

    total = harga * beli;
    cout <<"\nTotal Belanja \t : "<<total<<endl;

    }
    cout << "\nApakah Anda Ingin Mengulang[y/n]?";cin>>yes;
    }while(yes == 'y' || yes == 'Y');

    getch();
    return 0;
}
