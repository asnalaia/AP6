#include <iostream>

using namespace std;

int main() {
    // Label a: untuk mencetak "Hello World" dan kemudian melompat ke label d:
    a: 
        cout << "Hello World" << endl;
        goto d;
    // Label b: untuk mencetak "Universitas Sumatera Utara" dan kemudian mengakhiri program
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    // Label c: untuk mencetak "Fasilkom-TI" dan kemudian melompat ke label b:
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;
    // Label d: untuk mencetak "Ilmu Komputer" dan kemudian melompat ke label c:
    d:
        cout << "Ilmu Komputer" << endl;
        goto c;

    // Loop menggunakan goto, tidak disarankan karena sulit dibaca
    int angka = 1;
    loop:
        cout << angka << " ";
        angka++;
    // Pengulangan akan dilakukan selama angka masih kurang dari atau sama dengan 10
    if(angka <= 10) {
        goto loop;
    }
} 
