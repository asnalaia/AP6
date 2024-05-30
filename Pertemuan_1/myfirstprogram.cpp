#include <stdio.h>

int main() {
    // deklarasi variabel
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World\n");

    printf("Masukkan Nama: ");
    // membaca string dari input pengguna dan menyimpannya di variabel
    gets(nama);

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan KOM : ");
    scanf(" %c", &kom); // Menambahkan spasi sebelum %c untuk mengatasi masalah dengan karakter baru sebelumnya

    printf("Masukkan IP : ");
    scanf("%f", &ip); 

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama); // puts: put string

    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);
}