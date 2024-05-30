#include <iostream>

using namespace std;

int main() {
    const float PHI = 3.14; // Mendefinisikan konstanta PHI dengan nilai 3.14

    float r, t, v; // Mendeklarasikan variabel untuk jari-jari (r), tinggi (t), dan volume (v)

    // Meminta pengguna untuk memasukkan jari-jari
    cout << "Masukkan jari-jari : ";
    cin >> r; // Membaca input jari-jari dari pengguna

    // Meminta pengguna untuk memasukkan tinggi
    cout << "Masukkan tinggi : ";
    cin >> t; // Membaca input tinggi dari pengguna

    // Menghitung volume dengan rumus volume silinder (V = PHI * r^2 * t)
    v = PHI * r * r * t;

    // Menampilkan hasil perhitungan volume
    cout << "Volume = " << v << endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program berakhir dengan sukses
}