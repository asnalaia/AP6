#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
    // Operator penugasan (assignment)
    a = 5; // Mengatur nilai a menjadi 5
    b = 7; // Mengatur nilai b menjadi 7
    
    Operator aritmatika (arithmetic)
    int tambah = a + b; // Menjumlahkan a dan b
    int kurang = a - b; // Mengurangkan b dari a
    int kali = a * b; // Mengalikan a dan b
    float bagi = a / b; // Membagi a dengan b (perhatikan bahwa ini adalah pembagian integer)
    int mod = a % b; // Mendapatkan sisa pembagian a dengan b
    
    cout << "a+b=" << tambah << endl; // Menampilkan hasil penjumlahan
    cout << "a-b=" << kurang << endl; // Menampilkan hasil pengurangan
    cout << "a*b=" << kali << endl; // Menampilkan hasil perkalian
    cout << "a/b=" << bagi << endl; // Menampilkan hasil pembagian
    cout << "a%b=" << mod << endl; // Menampilkan hasil modulus
        
    Operator relasional (relational)
    cout << (a == b) << endl; // Mengecek apakah a sama dengan b
    cout << (a < b) << endl; // Mengecek apakah a kurang dari b
    cout << (a <= b) << endl; // Mengecek apakah a kurang dari atau sama dengan b
    cout << (a > b) << endl; // Mengecek apakah a lebih dari b
    cout << (a >= b) << endl; // Mengecek apakah a lebih dari atau sama dengan b
    cout << (a != b) << endl; // Mengecek apakah a tidak sama dengan b
    
    Operator logika (logical)
    cout << (true && true) << endl; // Operator AND logika
    cout << (true && false) << endl; // Operator AND logika
    cout << (false && true) << endl; // Operator AND logika
    cout << (false && false) << endl; // Operator AND logika
    
    cout << (true || true) << endl; // Operator OR logika
    cout << (true || false) << endl; // Operator OR logika
    cout << (false || true) << endl; // Operator OR logika
    cout << (false || false) << endl; // Operator OR logika
    
    cout << !true << endl; // Operator NOT logika
    cout << !false << endl; // Operator NOT logika
    
    Operator bitwise (bitwise)
    cout << (4 & 7) << endl; // Operator AND bitwise
    cout << (4 | 7) << endl; // Operator OR bitwise
    cout << (4 ^ 7) << endl; // Operator XOR bitwise
    cout << (~4) << endl; // Operator NOT bitwise
    cout << (7 << 2) << endl; // Operator shift kiri
    cout << (7 >> 2) << endl; // Operator shift kanan
    
    // Operator shorthand (shorthand)
    a = a + 2; // Menambah 2 ke a
    a += 2; // Menambah 2 ke a menggunakan shorthand
    a -= 2; // Mengurangkan 2 dari a menggunakan shorthand
    a *= 2; // Mengalikan a dengan 2 menggunakan shorthand
    a /= 2; // Membagi a dengan 2 menggunakan shorthand
    
    b = b + 3; // Menambah 3 ke b
    b += 3; // Menambah 3 ke b menggunakan shorthand
    b -= 2; // Mengurangkan 2 dari b menggunakan shorthand
    b *= 2; // Mengalikan b dengan 2 menggunakan shorthand
    b /= 2; // Membagi b dengan 2 menggunakan shorthand
    
    // Operator increment & decrement
    // Post-increment
    cout << a++ << endl; // Menampilkan a kemudian menambah 1 ke a
    cout << a << endl; // Menampilkan nilai a setelah increment
    
    // Pre-increment
    cout << a << endl; // Menampilkan nilai a saat ini
    cout << ++a << endl; // Menambah 1 ke a kemudian menampilkan a
    
    // Post-decrement
    cout << b-- << endl; // Menampilkan b kemudian mengurangi 1 dari b
    cout << b << endl; // Menampilkan nilai b setelah decrement
    
    // Pre-decrement
    cout << b << endl; // Menampilkan nilai b saat ini
    cout << --b << endl; // Mengurangi 1 dari b kemudian menampilkan b
    
    a++; // Menambah 1 ke a
    a--; // Mengurangi 1 dari a
    b++; // Menambah 1 ke b
    b--; // Mengurangi 1 dari b
}