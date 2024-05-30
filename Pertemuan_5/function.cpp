#include <iostream>

using namespace std;

// Deklarasi fungsi-fungsi yang akan digunakan
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
void sayHello(string name);
void garis();
void bintang();

int main() {
    system("cls"); // Menghapus layar konsol sebelum menampilkan output

    // Memanggil fungsi sayHello untuk menyapa pengguna
    sayHello("AP6");
    garis(); // Mencetak garis pemisah
    bintang(); // Mencetak garis bintang
    // Memanggil fungsi-fungsi matematika dan mencetak hasilnya
    cout << tambah(2, 3) << endl;
    cout << kurang(2, 3) << endl;
    cout << kali(2, 3) << endl;
    cout << bagi(2, 3) << endl;
    return 0;
}

// Definisi fungsi tambah
int tambah(int a, int b) {
    return a + b;
}

// Definisi fungsi kurang
int kurang(int a, int b) {
    return a - b;
}

// Definisi fungsi kali
int kali(int a, int b) {
    return a * b;
}

// Definisi fungsi bagi
float bagi(int a, int b) {
    // Menggunakan static_cast untuk melakukan type casting agar mendapatkan hasil pembagian float
    return static_cast<float>(a) / static_cast<float>(b);
}

// Definisi fungsi sayHello
void sayHello(string name) {
    cout << "Hello " << name << endl;
}

// Definisi fungsi garis
void garis() {
    cout << "================" << endl;
}

// Definisi fungsi bintang
void bintang() {
    cout << "***************" << endl;
}
