#include <iostream>
#include <string>
using namespace std;

struct Barang {
string nama;
int jumlah;

};

void masukanBarang (Barang*barang) {
string nama;
int jumlah;
    cout << " input barang = ";
    getline (cin, nama);
    cout << " input jumlah barang = ";
    cin >> jumlah;

    barang->nama = nama;
    barang->jumlah = jumlah;
