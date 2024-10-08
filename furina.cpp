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
}

void inputBarang (Barang barang) {
    cout << " nama barang = " << barang.nama << endl;
    cout << " jumlah barang = " << barang.jumlah << endl;

}

int main () {
   Barang daftarBarang[10];
   int jumlahBarang = 0;
   int pilihan;

   do{
      cout << "=== Inventaris Barang ===" << endl;
      cout << "1. Tambahkan barang" << endl;
      cout << "2. Tampilkan barang" << endl;
      cout << "3. Selesai" << endl;
      cout << "Pilih opsi: ";
      cin >> pilihan;
switch (pilihan) {
         case 1:
            masukanBarang(&daftarBarang[jumlahBarang]);
            jumlahBarang++;
            break;
         case 2:
            for (int i = 0; i < jumlahBarang; i++) {
               inputBarang(daftarBarang[i]);
            }
            break;
         case 3:
            cout << "Keluar dari program.";
            break;
            default:
            cout << "Pilihan tidak Tersedia!" << endl;
      }
      cout << endl;
   }
      while(pilihan!= 3);

   return 0;

}
