#include <iostream>
#include "calc.h" // Memasukkan header file yang berisi definisi fungsi kalkulator

using namespace std;

// Fungsi untuk mencetak garis pemisah
void garis() {
    cout << "====================================" << endl;
}

// Fungsi untuk mencetak garis bintang
void bintang() {
    cout << "************************************" << endl;
}

// Fungsi untuk menampilkan menu operasi kalkulator
void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Modulo\n6. Pangkat" << endl;
    garis();
}

int main() {
    char cont;

    do {
        system("cls"); // Menghapus layar konsol sebelum menampilkan menu

        int operasi, a, b;
        float hasil;

        menu(); // Menampilkan menu operasi

        // Meminta input operasi, angka pertama, dan angka kedua dari pengguna
        cout << "Masukkan operasi : ";
        cin >> operasi;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        // Memilih operasi yang sesuai berdasarkan input pengguna dan menghitung hasilnya
        switch(operasi) {
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        // Menampilkan hasil perhitungan
        cout << "Hasil = " << hasil << endl;

        // Meminta input untuk melanjutkan atau tidak
        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y'); // Melakukan loop jika input adalah 'Y' atau 'y'

    bintang(); // Mencetak garis bintang sebagai penutup
    cout << "Terima Kasih Telah Menggunakan Program Kalkulator" << endl;

    return 0;
}
