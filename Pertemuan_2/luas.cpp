#include <iostream>
using namespace std;

int main() // Menghapus tanda titik koma di sini
{
    float panjang, lebar, luas; // Mendeklarasikan variabel untuk panjang, lebar, dan luas

    // Meminta pengguna untuk memasukkan panjang
    cout << "Masukkan panjang: ";
    cin >> panjang; // Membaca input panjang dari pengguna

    // Meminta pengguna untuk memasukkan lebar
    cout << "Masukkan lebar: ";
    cin >> lebar; // Membaca input lebar dari pengguna

    // Menghitung luas dengan mengalikan panjang dan lebar
    luas = panjang * lebar;

    // Menampilkan hasil perhitungan luas
    cout << "Luas= " << luas << endl;

    return 0; // Menambahkan pernyataan return untuk menandakan bahwa program berakhir dengan sukses
}