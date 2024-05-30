#include <iostream>

using namespace std;

int main() {
    int nilai; // Deklarasi variabel untuk menyimpan nilai

    // Meminta pengguna untuk memasukkan nilai
    cout << "Masukkan nilai: ";
    cin >> nilai; // Membaca input nilai dari pengguna

    // If Statement
    if (nilai < 65) {
        // Jika nilai kurang dari 65, tampilkan "Tidak Lulus"
        cout << "Tidak Lulus" << endl;
    }
    
    // If-Else Statement
    if (nilai < 65) {
        // Jika nilai kurang dari 65, tampilkan "Tidak Lulus"
        cout << "Tidak Lulus" << endl;
    } else {
        // Jika nilai tidak kurang dari 65, tampilkan "Lulus"
        cout << "Lulus" << endl;
    }

    // If-Else-If Statement
    if (nilai < 65) {
        // Jika nilai kurang dari 65, tampilkan "Tidak Lulus"
        cout << "Tidak Lulus" << endl;
    } else if (nilai > 65) {
        // Jika nilai lebih dari 65, tampilkan "Lulus"
        cout << "Lulus" << endl;
    } else if (nilai == 65) {
        // Jika nilai sama dengan 65, tampilkan "Lulus dengan nilai pas"
        cout << "Lulus dengan nilai pas" << endl;
    }

    // Nested If
    if (nilai < 0 || nilai > 100) {
        // Jika nilai kurang dari 0 atau lebih dari 100, tampilkan "Tidak valid"
        cout << "Tidak valid" << endl;
    } else {
        // Jika nilai antara 0 dan 100
        if (nilai < 65) {
            // Jika nilai kurang dari 65, tampilkan "Tidak Lulus"
            cout << "Tidak Lulus" << endl;
        } else if (nilai > 65) {
            // Jika nilai lebih dari 65, tampilkan "Lulus"
            cout << "Lulus" << endl;
        } else if (nilai == 65) {
            // Jika nilai sama dengan 65, tampilkan "Lulus dengan nilai pas"
            cout << "Lulus dengan nilai pas" << endl;
        }
    }

    // Switch Case
    switch (nilai) {
        case 1:
            // Jika nilai sama dengan 1, tampilkan "Senin"
            cout << "Senin" << endl;
            break;
        case 2:
            // Jika nilai sama dengan 2, tampilkan "Selasa"
            cout << "Selasa" << endl;
            break;
        case 3:
            // Jika nilai sama dengan 3, tampilkan "Rabu"
            cout << "Rabu" << endl;
            break;
        case 4:
            // Jika nilai sama dengan 4, tampilkan "Kamis"
            cout << "Kamis" << endl;
            break;
        case 5:
            // Jika nilai sama dengan 5, tampilkan "Jumat"
            cout << "Jumat" << endl;
            break;
        case 6:
            // Jika nilai sama dengan 6, tampilkan "Sabtu"
            cout << "Sabtu" << endl;
            break;
        case 7:
            // Jika nilai sama dengan 7, tampilkan "Minggu"
            cout << "Minggu" << endl;
            break;
        default:
            // Jika nilai tidak cocok dengan kasus mana pun, tampilkan "Tidak Valid"
            cout << "Tidak Valid" << endl;
            break; // Opsional
    }

    // Switch Case For Range (Tidak didukung secara langsung oleh C++, memerlukan ekstensi GCC)
    switch (nilai) {
        case 90 ... 100:
            // Jika nilai antara 90 dan 100, tampilkan "A"
            cout << "A" << endl;
            break;
        case 85 ... 89:
            // Jika nilai antara 85 dan 89, tampilkan "B+"
            cout << "B+" << endl;
            break;
        case 80 ... 84:
            // Jika nilai antara 80 dan 84, tampilkan "B"
            cout << "B" << endl;
            break;
        case 75 ... 79:
            // Jika nilai antara 75 dan 79, tampilkan "C+"
            cout << "C+" << endl;
            break;
        case 70 ... 74:
            // Jika nilai antara 70 dan 74, tampilkan "C"
            cout << "C" << endl;
            break;
        case 65 ... 69:
            // Jika nilai antara 65 dan 69, tampilkan "D"
            cout << "D" << endl;
            break;
        case 0 ... 64:
            // Jika nilai antara 0 dan 64, tampilkan "E"
            cout << "E" << endl;
            break;
        default:
            // Jika nilai tidak cocok dengan rentang mana pun, tampilkan "Tidak valid"
            cout << "Tidak valid" << endl;
    }

    // Operator Ternary (If-Else Singkat)
    string tipe = (nilai > 0) ? "Positif" : "Negatif"; // Menentukan tipe nilai positif atau negatif
    cout << tipe << endl; // Menampilkan tipe nilai
}