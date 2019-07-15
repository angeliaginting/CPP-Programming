#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color E");
    int nq,nm,nf;
    char no[20],nama[20],kel[5];
    float na;
    //input
    cout << "Nomor Induk Siswa\t: ";cin>>no;
    cout << "Nama Siswa\t\t: ";cin>>nama;
    cout << "Kelas\t\t\t: ";cin>>kel;
    cout << "Nilai Quis\t\t: ";cin>>nq;
    cout << "Nilai MID\t\t: ";cin>>nm;
    cout << "Nilai Final\t\t: ";cin>>nf;

    //proses
    na=(2*nq+3*nm+5*nf)/10;

    //output
    cout <<"Nama Siswa \t\t: "<<nama<<endl;
    cout <<"Nilai Quis \t\t: "<<nq<<", Nilai MID: "<<nm<<", Nilai Final: "<<nf<<endl;
    cout <<"Nilai Akhir \t\t: "<<na<<endl;

    getch();
    return 0;
}
