#include <iostream>
#include <vector>

using namespace std;

// Deklarasi struct Mahasiswa
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

// Deklarasi typedef untuk struct Siswa
typedef struct {
    string nama, nim;
} Siswa;

int main() {
    system("cls"); // Membersihkan layar konsol

    Mahasiswa mhs; // Mendeklarasikan variabel mhs dengan tipe struct Mahasiswa
    vector<Mahasiswa> mahasiswa; // Mendeklarasikan vektor mahasiswa yang berisi elemen-elemen bertipe struct Mahasiswa
    int n;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    // Menggunakan loop for untuk menginput data mahasiswa sejumlah n
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cin.get(); // Membersihkan newline character dari input sebelumnya

        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); // Mengambil nama mahasiswa dengan getline() untuk menghindari masalah dengan cin

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        // Memasukkan data mahasiswa ke dalam vektor mahasiswa
        mahasiswa.push_back(mhs);
    }

    // Menggunakan loop for untuk menampilkan informasi mahasiswa yang ada dalam vektor mahasiswa
    for (int i = 0; i < n; i++) {
        cout << mahasiswa[i].nama << " memiliki NIM " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }
}
