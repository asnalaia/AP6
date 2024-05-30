#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Deklarasi variabel untuk berat badan, tinggi badan, dan BMI
    float bB, tB, bmi;

    // Meminta pengguna untuk memasukkan berat badan dalam kilogram
    cout << "Masukkan berat badan (kg): ";
    cin >> bB; // Membaca input berat badan dari pengguna

    // Meminta pengguna untuk memasukkan tinggi badan dalam meter
    cout << "Masukkan tinggi badan (m): ";
    cin >> tB; // Membaca input tinggi badan dari pengguna

    // Menghitung BMI dengan rumus berat badan dibagi tinggi badan kuadrat
    bmi = bB / (tB * tB);

    // Mengatur presisi keluaran menjadi 2 angka di belakang koma
    cout << fixed << setprecision(2);

    // Menampilkan hasil perhitungan BMI
    cout << "BMI Anda adalah: " << bmi << endl;

    // Menentukan kategori berdasarkan nilai BMI
    if (bmi < 18.1)
    {
        // Jika BMI kurang dari 18.1, kategori underweight
        cout << "Anda termasuk dalam kategori underweight" << endl;
    } 
    else if (bmi >= 18.1 && bmi < 23.1)
    {
        // Jika BMI antara 18.1 dan 23.1, kategori normal
        cout << "Anda termasuk dalam kategori normal" << endl;
    } 
    else if (bmi >= 23.1 && bmi < 28.1)
    {
        // Jika BMI antara 23.1 dan 28.1, kategori overweight
        cout << "Anda termasuk dalam kategori overweight" << endl;
    } 
    else 
    {
        // Jika BMI 28.1 atau lebih, kategori obesitas
        cout << "Anda termasuk dalam kategori obesitas" << endl;
    }
}