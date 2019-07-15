#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

int main()
{
    int nq, nm, nf;
    char no[20], nama[30], kelas[10], huruf;
    float na;

    cout << "Nomor Induk Siswa\t : ";gets(no);
    cout << "Nama Siswa\t\t : ";gets(nama);
    cout << "Kelas\t\t\t : ";cin>>kelas;
    cout << "Nilai Quis\t\t : ";cin>>nq;
    cout << "Nilai Mid\t\t : ";cin>>nm;
    cout << "Nilai Final\t\t : ";cin>>nf;
    cout << "=====================================" << endl;

    na=(2*nq+3*nm+5*nf)/10;

    setcolor(6);
    cout << "Nama Siswa\t\t : "<<nama<<endl;
    cout << "Kelas\t\t\t : "<<kelas<<endl;

    setcolor(4);
    cout << "Nilai Akhir\t\t : "<<na<<endl;
    cout << "Nilai Huruf\t\t :"<<huruf;

    if(na>=80 && na<=100){
        cout << "A" <<huruf;
    }else if(na>=70 && na<=79){
        cout << "B" <<huruf;
    }else if(na>=60 && na<=69){
        cout << "C" <<huruf;
    }else if(na>=50 && na<=59){
        cout << "D" <<huruf;
    }else if(na>=40 && na<=49){
        cout << "E" <<huruf;
    }else{
        cout << "Nilai Tidak Terdaftar" <<huruf;
    }

    getch();
    return 0;
}
