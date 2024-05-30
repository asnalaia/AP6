#include <math.h> // Header file untuk fungsi matematika

// Fungsi untuk menambahkan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengurangkan dua bilangan bulat
int kurang(int a, int b) {
    return a - b;
}

// Fungsi untuk mengalikan dua bilangan bulat
int kali(int a, int b) {
    return a * b;
}

// Fungsi untuk membagi dua bilangan bulat dan mengembalikan hasil dalam bentuk float
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

// Fungsi untuk mendapatkan sisa pembagian dua bilangan bulat (modulo)
int modulo(int a, int b) {
    return a % b;
}

// Fungsi untuk menghitung pangkat dua bilangan bulat
int pangkat(int a, int b) {
    return pow(a, b);
}
