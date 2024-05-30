#include <iostream>

using namespace std;

int main() {
    // Looping dari 1 sampai 10 dan mencetak "Hello World" sebanyak 10 kali
    for(int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }

    // Looping dari 1 sampai 20 dan mencetak angka genap
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }

    // Membuat persegi bintang 4x4
    for(int baris = 1; baris <= 4; baris++) {
        for(int kolom = 1; kolom <= 4; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Segitiga bintang dengan tinggi 4
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Menghitung deret dan menjumlahkannya
    int n, num = 0, sum = 0;

    cout << "Masukkan suku ke : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            num = num; // Jika i genap, num tidak berubah
        } else {
            num += 5; // Jika i ganjil, num bertambah 5
        }
        sum += num; // Menambahkan num ke dalam sum

        cout << num << " ";
    }
    cout << endl;
    
    cout << "Suku ke " << n << " adalah " << num << endl; // Menampilkan suku ke-n
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl; // Menampilkan jumlah semua suku hingga ke-n
}
