// Fungsi untuk penjumlahan dua bilangan bulat
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk pengurangan dua bilangan bulat
int kurang(int a, int b) {
    return a - b;
}

// Fungsi untuk perkalian dua bilangan bulat
int kali(int a, int b) {
    return a * b;
}

// Fungsi untuk pembagian dua bilangan bulat, mengembalikan hasil dalam bentuk float
float bagi(int a, int b) {
    // Menggunakan static_cast untuk melakukan type casting agar mendapatkan hasil pembagian float
    return static_cast<float>(a) / static_cast<float>(b);
}
