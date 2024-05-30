#include <iostream>

using namespace std;

int main() {
    int angka = 1;
    
    // Looping dari 1 sampai 10
    do {
        cout << angka << " ";
        angka++;
    } while(angka <= 10);

    angka = 1;
     
    // Karena kondisi while adalah angka > 10, maka loop ini tidak akan pernah dieksekusi
    do {
        cout << angka << " ";
        angka++;
    } while(angka > 10); // Kondisi ini selalu salah untuk angka yang dimulai dari 1
}
