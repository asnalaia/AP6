#include <iostream>
#include "operasi.h" // Memasukkan header file yang berisi definisi fungsi operasi matematika
#include "preprocessor.h" // Memasukkan header file yang berisi definisi konstanta PI

uns; // Deklarasi tidak jelas, mungkin merupakan kesalahan penulisan

// Fungsi untuk menyapa dengan nama
void sayHello(string name) {
    o << "Hello " << name << n; // Mencetak pesan sapaan ke output
}

// Fungsi untuk mencetak garis pemisah
void garis() {
    o << "================" << n; // Mencetak garis pemisah ke output
}

// Fungsi untuk mencetak garis bintang
void bintang() {
    o << "***************" << n; // Mencetak garis bintang ke output
}

int main() {
    system("cls"); // Menghapus layar konsol sebelum menampilkan output

    sayHello("AP6"); // Memanggil fungsi sayHello untuk menyapa
    garis(); // Mencetak garis pemisah
    bintang(); // Mencetak garis bintang

    // Memanggil fungsi-fungsi matematika dan mencetak hasilnya
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;

    // Mencetak nilai konstanta PI
    o << PI << n;

    return 0;
}
