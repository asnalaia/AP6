#include <iostream>
#include <array> // Mengimpor library array

using namespace std;

int main() {
    system("cls"); // Membersihkan layar konsol

    //? Array Declaration and Initialization
    // Deklarasi dan inisialisasi array dengan 5 elemen bertipe string
    // string nama[5] = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    //? Accessing Elements in Array
    // Mengakses dan mencetak elemen-elemen dalam array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // Menggunakan loop for untuk mencetak semua elemen dalam array
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    //? Multidimensional Array
    // Deklarasi dan inisialisasi matriks 2x2
    // int matrix[2][2] = {{1, 3}, {2, 4}};

    // Menggunakan nested loop untuk mencetak semua elemen dalam matriks
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //? String (Array of Characters)
    // Deklarasi dan inisialisasi string
    // string nama = "Jonrio";
    
    // Menggunakan loop for untuk mencetak setiap karakter dalam string
    // for(int i = 0; i < 3; i++) {
    //     cout << nama[i] << " ";
    // }

    // Menggunakan loop for dan method length() untuk mencetak setiap karakter dalam string
    // for(int i = 0; i < nama.length(); i++) {
    //     cout << nama[i] << endl;
    // }

    //? Example 1
    // Contoh penggunaan array untuk menyimpan nilai-nilai mahasiswa
    // int n;

    // cout << "Masukkan banyak mahasiswa : ";
    // cin >> n;

    // float nilai[n];
    // for(int i = 0; i < n; i++) {
    //     cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : ";
    //     cin >> nilai[i];
    // }

    // for(int i = 0; i < n; i++) {
    //     cout << "Nilai mahasiswa ke " << i + 1 << " adalah " << nilai[i] << endl;
    // }

    //? Example 2
    // Contoh penggunaan array of string
    // string nama_karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santi", "Dodi"};

    // Menggunakan loop for untuk mencetak semua nama karyawan
    // for(int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //? Example 3
    // Contoh penggunaan array untuk penjumlahan matriks
    // int matriks1[2][2];
    // int matriks2[2][2];
    // int hasil[2][2];

    // Input elemen-elemen matriks pertama
    // cout << "Matriks 1" << endl;
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
    //         cin >> matriks1[i][j];
    //     }
    // }

    // Input elemen-elemen matriks kedua
    // cout << "Matriks 2" << endl;
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
    //         cin >> matriks2[i][j];
    //     }
    // }

    // Penjumlahan kedua matriks
    // cout << "Hasil Penjumlahan" << endl;
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    //         cout << hasil[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //? Array Library
    // Menggunakan class array dari library array untuk mendeklarasikan dan menginisialisasi array
    array<string, 5> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // Menggunakan loop for range-based untuk mencetak semua nama dalam array
    for(string mhs : nama) {
        cout << mhs << endl;
    }
}
