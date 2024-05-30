#include <iostream>

using namespace std;

int main() {
    // Looping dengan while dari 1 sampai 10
    int angka = 1;
    while (angka <= 10) {
        cout << angka << " ";
        angka++;
    }

    // Looping dengan while dari 1 sampai 20 dan mencetak angka genap
    int angka = 1; // Perlu diperhatikan bahwa Anda tidak dapat mendeklarasikan variabel dengan nama yang sama di dalam satu blok kode
    while (angka <= 20) {
        if (angka % 2 == 0) {
            cout << angka << " ";
        }
        angka++;
    }
}
