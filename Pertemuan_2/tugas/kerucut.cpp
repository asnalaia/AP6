#include <iostream>
using namespace std;

int main() 
{
    // Deklarasi konstanta phi
    const float phi = 3.14;
    // Deklarasi variabel untuk jari-jari, tinggi, garis pelukis, volume, dan luas permukaan
    float r, t, s, volume, luas_permukaan;

    // Meminta pengguna untuk memasukkan jari-jari kerucut
    cout << "Masukkan jari-jari kerucut: ";
    // Membaca nilai jari-jari dari input pengguna
    cin >> r;
    // Meminta pengguna untuk memasukkan tinggi kerucut
    cout << "Masukkan tinggi kerucut: ";
    // Membaca nilai tinggi dari input pengguna
    cin >> t;
    // Meminta pengguna untuk memasukkan garis pelukis kerucut
    cout << "Masukkan garis pelukis kerucut: ";
    // Membaca nilai garis pelukis dari input pengguna
    cin >> s; 

    // Menghitung volume kerucut menggunakan rumus
    volume = (1.0 / 3) * phi * r * r * t; 
    // Menghitung luas permukaan kerucut menggunakan rumus
    luas_permukaan = phi * r * (s + r);  

    // Menampilkan volume kerucut
    cout << "Volume kerucut adalah " << volume << endl;
    // Menampilkan luas permukaan kerucut
    cout << "Luas permukaan kerucut adalah " << luas_permukaan << endl;
}