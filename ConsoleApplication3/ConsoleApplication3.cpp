#include <iostream>
#include <string>
using namespace  std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << "Data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);