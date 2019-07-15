#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char np[20], jp[30];
    long int penjualan, jasa;
    float komisi;
    double total;

    //input
    cout << "================================" << endl;
    cout << "PERUSAHAAN LOMBA TARGET" << endl;
    cout << "================================" << endl;
    cout << "Nama Pegawai \t : ";gets(np);
    cout << "Jabatan Pegawai\t : ";cin>>jp;
    cout << "Penjualan " << np <<" Perhari Rp";cin>>penjualan;

    if(penjualan>=0 && penjualan<=200){
        jasa = 10000;
        komisi = 0.1 * penjualan;
    }else if(penjualan <= 500000){
        jasa = 20000;
        komisi = 0.15 * penjualan;
    }else{
        jasa = 30000;
        komisi = 0.2 * penjualan;
    }

    //proses
    total = komisi + jasa;

    //output
    cout << "Nama Pegawai \t :"<<np<<endl;
    cout << "Uang Jasa \t : "<<jasa<<endl;
    cout << "Uang Komisi \t : "<<komisi<<endl;
    cout << "Uang Total \t : "<<total<<endl;

    getch();
    return 0;
}
