#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color E");
    float bil1, bil2, tambah, kurang, kali, bagi;
    cout << "Masukkan Bilangan 1 :  ";cin>>bil1;
    cout << "Masukkan Bilangan 2 :  ";cin>>bil2;
    cout << "===================================" << endl;

    tambah = bil1 + bil2;
    kurang = bil1 - bil2;
    kali = bil1 * bil2;
    bagi = bil1 / bil2;

    cout << "Hasil penjumlahan dari "<<bil1<<" + "<<bil2<<" = "<<tambah<<endl;
    cout << "Hasil pengurangan dari "<<bil1<<" - "<<bil2<<" = "<<kurang<<endl;
    cout << "Hasil perkalian dari "<<bil1<<" * "<<bil2<<" = "<<kali<<endl;
    cout << "Hasil pembagian dari "<<bil1<<" : "<<bil2<<" = "<<bagi<<endl;
    cout << "===================================" << endl;

    getch();
    return 0;
}
