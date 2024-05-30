#include <iostream>
using namespace std;

int main() {
    // Deklarasi konstanta phi
    const float phi = 3.14;
    // Deklarasi variabel untuk jari-jari, volume, dan luas permukaan
    float r, volume, luas_permukaan;

    // Meminta pengguna untuk memasukkan jari-jari bola
    cout << "Masukkan jari-jari bola: ";
    // Membaca nilai jari-jari dari input pengguna
    cin >> r;

    // Menghitung volume bola menggunakan rumus
    volume = (4 / 3) * phi * r * r * r; 
    // Menghitung luas permukaan bola menggunakan rumus
    luas_permukaan = 4 * phi * r * r;  

    // Menampilkan volume bola
    cout << "Volume bola adalah " << volume << endl;
    // Menampilkan luas permukaan bola
    cout << "Luas permukaan bola adalah " << luas_permukaan << endl;
}