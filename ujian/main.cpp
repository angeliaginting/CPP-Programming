#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

garis(){
    cout << "=============================================================================\n";
}

int main()
{
    int n, x, jumlah[100], kode[100];
    char ukuran[100], *nama[100], jawab;
    long harga[100], total[100], totalkes = 0, totalbay, discount, bayar, kembalian;

    do{
        system("cls");

        cout << "Program Penjualan" << endl;
        cout << "Banyak barang di beli : ";cin>>n;

        for(x=1; x<=n; x++){
            cout << "\nData ke - " << x << endl;
            cout << "Kode Barang \t\t : ";cin>>kode[x];
            cout << "Ukuran Barang \t\t : ";cin>>ukuran[x];

            if(kode[x] == 1){
                nama[x] = "Susu Dancow";
                if(ukuran[x] == 'b' || ukuran[x] == 'B'){
                    harga[x] = 50000;
                }else if(ukuran[x] == 's' || ukuran[x] == 'S'){
                    harga[x] = 35000;
                }else{
                    harga[x] = 25000;
                }
            }else if(kode[x] == 2){
                nama[x] = "Vape";
                if(ukuran[x] == 'b' || ukuran[x] == 'B'){
                    harga[x] = 30000;
                }else if(ukuran[x] == 's' || ukuran[x] == 'S'){
                    harga[x] = 25000;
                }else{
                    harga[x] = 20000;
                }
            }else if(kode[x] == 3){
                nama[x] = "Sunlight";
                if(ukuran[x] == 'b' || ukuran[x] == 'B'){
                    harga[x] = 20000;
                }else if(ukuran[x] == 's' || ukuran[x] == 'S'){
                    harga[x] = 15000;
                }else{
                    harga[x] = 10000;
                }
            }else if(kode[x] == 4){
                nama[x] = "Kecap ABC";
                if(ukuran[x] == 'b' || ukuran[x] == 'B'){
                    harga[x] = 15000;
                }else if(ukuran[x] == 's' || ukuran[x] == 'S'){
                    harga[x] = 10000;
                }else{
                    harga[x] = 10000;
                }
            }else if(kode[x] == 5){
                nama[x] = "Bimoli";
                if(ukuran[x] == 'b' || ukuran[x] == 'B'){
                    harga[x] = 15000;
                }else if(ukuran[x] == 's' || ukuran[x] == 'S'){
                    harga[x] = 10000;
                }else{
                    harga[x] = 10000;
                }
            }else{
                nama[x] = "Error";
                cout << "\nTidak ada barang" << endl;
            }

            cout << "Nama Barang \t\t : " << nama[x] << endl;
            cout << "Ukuran \t\t\t : " << ukuran[x] << endl;
            cout << "Harga \t\t\t : " << harga[x] << endl;
            cout << "Jumlah Beli \t\t : ";cin >> jumlah[x];

            total[x] = harga[x] * jumlah[x];

            cout << "\nTotal \t\t\t : " << total[x] << endl;

            totalkes += total[x];

            if(totalkes >= 500000){
                discount = 150000;
            }else if(totalkes >= 350000){
                discount = 100000;
            }else if(totalkes >= 200000){
                discount = 50000;
            }else{
                discount = 0;
            }

            totalbay = totalkes - discount;
        }

        system("cls");

        gotoxy(1,1);garis();
        gotoxy(1,2);cout << "                    Daftar Penjualan                    ";
        gotoxy(1,3);cout << "                   Swalayan Suka Maju                   ";
        gotoxy(1,4);garis();
        gotoxy(1,5);cout << "No     Nama                Ukuran        Harga        Jumlah        Total";
        gotoxy(1,6);garis();

        for(x=1; x<=n; x++){
            gotoxy(1,6+x);cout<<x;
            gotoxy(8,6+x);cout<<nama[x];
            gotoxy(30,6+x);cout<<ukuran[x];
            gotoxy(42,6+x);cout<<harga[x];
            gotoxy(57,6+x);cout<<jumlah[x];
            gotoxy(69,6+x);cout<<total[x];
        }

        gotoxy(1,6+x);garis();

        cout << "\nTotal Keseluruhan \t : " << totalkes << endl;
        cout << "Discount \t\t : " << discount << endl;
        cout << "Total Bayar \t\t : " << totalbay << endl;
        cout << "Bayar \t\t\t : ";cin >> bayar;

        if(bayar >= totalbay){
            kembalian = bayar - totalbay;
            cout << "Uang Kembalian \t\t : " << kembalian << endl;
        }else{
            cout << "Uang Anda Kurang" << endl;
        }

        cout << "\nApakah Anda Ingin Mengulang[y/n]? ";cin >> jawab;
    }while(jawab == 'Y' || jawab == 'y');

    getch();
    return 0;
}
