#include <iostream>
#include <vector>

using namespace std;

// Deklarasi kelas Mahasiswa
class Mahasiswa {
    // Atribut privat: hanya dapat diakses oleh anggota kelas Mahasiswa itu sendiri
    private:
        string nama, nim;
        float nilai;

    // Atribut publik: dapat diakses dari luar kelas Mahasiswa
    public:
        // Constructor: digunakan untuk inisialisasi objek saat pembuatan
        Mahasiswa(string nama, string nim, float nilai) {
            // Menginisialisasi atribut dengan nilai dari parameter konstruktor
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        // Getter Method: digunakan untuk mengambil nilai atribut
        string getNama() {
            return this->nama;
        }

        string getNim() {
            return this->nim;
        }

        float getNilai() {
            return this->nilai;
        }

        // Metode display: untuk menampilkan informasi mahasiswa
        void display() {
            cout << "Nama  : " << this->getNama() << endl;
            cout << "NIM   : " << this->getNim() << endl;
            cout << "Nilai : " << this->getNilai() << endl;
        }
};

int main() {
    system("cls"); // Membersihkan layar konsol

    vector<Mahasiswa> mahasiswa; // Mendeklarasikan vektor mahasiswa

    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Membersihkan newline character dari input sebelumnya

        cout << "Masukkan nama : ";
        getline(cin, nama); // Mengambil nama mahasiswa dengan getline() untuk menghindari masalah dengan cin

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        // Membuat objek Mahasiswa menggunakan constructor dan menambahkannya ke vektor mahasiswa
        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }

    // Menampilkan informasi mahasiswa dari vektor mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();
    }
}
