#include <iostream>

using namespace std;

int main() {
    int angka; // Deklarasi variabel untuk menyimpan angka
    string tipe; // Deklarasi variabel untuk menyimpan tipe angka (genap atau ganjil)

    // Meminta pengguna untuk memasukkan angka
    cout << "Masukkan angka: ";
    cin >> angka; // Membaca input angka dari pengguna

    // Menentukan apakah angka genap atau ganjil menggunakan operator ternary
    tipe = (angka % 2 == 0) ? "Genap" : "Ganjil";
    // Jika angka habis dibagi 2, tipe = "Genap", jika tidak, tipe = "Ganjil"

    // Menampilkan tipe angka (genap atau ganjil)
    cout << tipe << endl;

    return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program berakhir dengan sukses
}