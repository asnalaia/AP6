#include <iostream>
#include <vector> // Mengimpor library vector

using namespace std;

int main() {
    system("cls"); // Membersihkan layar konsol

    //? Vector Decalaration and Initialization
    // Deklarasi dan inisialisasi vector dengan elemen-elemen bertipe string
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    //? Accessing Elements in Vector
    // Menggunakan loop for untuk mencetak semua elemen dalam vector
    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }

    // Menggunakan loop for each untuk mencetak semua elemen dalam vector
    //* For Each Loop
    for(string mhs : nama) {
        cout << mhs << endl;
    }

    //? Adding Data to Vector
    // Menambahkan data "Wawan" ke akhir vector
    // nama.push_back("Wawan");

    //? Deleting Data from Vector
    // Menghapus data terakhir dari vector
    // nama.pop_back();

    // Menghapus data pada indeks ke-2 dari vector
    // nama.erase(nama.begin() + 2);

    // Menggunakan loop for untuk mencetak semua elemen dalam vector setelah operasi tambah/hapus
    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }
}
