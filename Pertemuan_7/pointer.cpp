#include <iostream>

using namespace std;

// Function untuk melakukan penjumlahan dua variabel yang diindikasikan oleh pointer
void penjumlahan(int* a, int* b) {
    *a += *b; // Menambahkan nilai yang ditunjuk oleh pointer a dengan nilai yang ditunjuk oleh pointer b
    cout << *a << endl; // Mencetak hasil penjumlahan
}

int main() {
    system("cls"); // Membersihkan layar konsol

    //? Pointer Declaration
    int number = 16; // Mendeklarasikan variabel 'number' dengan nilai 16
    int* ptrnumber = &number; // Mendeklarasikan pointer 'ptrnumber' yang menunjuk ke alamat variabel 'number'

    // Mencetak informasi mengenai variabel dan pointer
    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;
    cout << "Alamat variabel ptrnumber : " << &ptrnumber << endl;

    //? Pointer Operation
    *ptrnumber = 37; // Mengubah nilai yang ditunjuk oleh pointer 'ptrnumber' menjadi 37
    // Mencetak informasi setelah operasi perubahan nilai
    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;
    cout << "Alamat variabel ptrnumber : " << &ptrnumber << endl;

    //? Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // Mendeklarasikan array 'num' dengan beberapa nilai
    int* ptrnum = num; // Mendeklarasikan pointer 'ptrnum' yang menunjuk ke alamat array 'num'

    // Mencetak informasi mengenai array dan pointer
    cout << "Isi variabel num indeks 0 = " << num[0] << endl;
    cout << "Alamat memori variabel num indeks 0 = " << &num[0] << endl;
    cout << "Isi variabel ptrnum = " << ptrnum << endl;
    cout << "Isi variabel yang ditunjuk oleh ptrnum = " << *ptrnum << endl;

    //? Pointer as Parameter
    int a = 2; // Mendeklarasikan variabel 'a' dengan nilai 2
    int b = 3; // Mendeklarasikan variabel 'b' dengan nilai 3
    penjumlahan(&a, &b); // Memanggil fungsi penjumlahan dengan menggunakan alamat dari variabel 'a' dan 'b' sebagai parameter
    cout << a << endl; // Mencetak nilai variabel 'a' setelah fungsi penjumlahan

    //? Pointer to Pointer
    int n = 4; // Mendeklarasikan variabel 'n' dengan nilai 4
    int* ptrn = &n; // Mendeklarasikan pointer 'ptrn' yang menunjuk ke alamat variabel 'n'
    int** ptr_ptrn = &ptrn; // Mendeklarasikan pointer 'ptr_ptrn' yang menunjuk ke alamat dari pointer 'ptrn'

    // Mencetak informasi mengenai variabel dan pointer
    cout << "Isi variabel n = " << n << endl;
    cout << "Alamat variabel n = " << &n << endl;
    cout << "Isi variabel ptrn = " << ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptrn = " << *ptrn << endl;
    cout << "Alamat variabel ptrn = " << &ptrn << endl;
    cout << "Isi variabel ptr_ptrn = " << ptr_ptrn << endl;
    cout << "Isi variabel yang ditunjuk oleh ptr_ptrn = " << *ptr_ptrn << endl;
    cout << "Isi variabel n diakses dari ptr_ptrn = " << **ptr_ptrn << endl;
    cout << "Alamat memori ptr_ptrn = " << &ptr_ptrn << endl;

    //? Dynamic Pointer
    int* ptr = new int; // Mengalokasikan memori dinamis untuk menyimpan sebuah integer
    *ptr = 24; // Memberikan nilai 24 ke dalam lokasi yang ditunjuk oleh pointer 'ptr'
    cout << "Isi variabel ptr = " << ptr << endl; // Mencetak alamat dari pointer 'ptr'
    cout << "Data yang ada di variabel ptr = " << *ptr << endl; // Mencetak nilai yang ditunjuk oleh pointer 'ptr'
    delete ptr; // Menghapus memori yang telah dialokasikan secara dinamis
    cout << "Isi variabel ptr = " << ptr << endl; // Mencetak alamat dari pointer 'ptr'
    cout << "Data yang ada di variabel ptr = " << *ptr << endl; // Mencetak nilai yang ditunjuk oleh pointer 'ptr' setelah penghapusan
}
