#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PELUANG 5  // Batas peluang tebakan

// Fungsi untuk memilih kata acak dari daftar kata
void pilihKata(char *kata) {
    const char *daftarKata[] = {"pemrograman", "komputer", "bahasa", "informatika", "algoritma"};
    int index = rand() % 5;  // Memilih indeks acak
    strcpy(kata, daftarKata[index]);  // Menyalin kata ke variabel kata
}

// Fungsi untuk menampilkan status huruf yang benar
void tampilkanHurufBenar(char *kata, char *terungkap) {
    printf("Tebakan kata: ");
    for (int i = 0; i < strlen(kata); i++) {
        if (terungkap[i] == 0) {
            printf("_ ");  // Menampilkan _ untuk huruf yang belum terungkap
        } else {
            printf("%c ", terungkap[i]);  // Menampilkan huruf yang terungkap
        }
    }
    printf("\n");
}

// Fungsi untuk mengecek apakah tebakan kata pemain benar
int tebakKata(char *kata, char *tebakan) {
    if (strcmp(kata, tebakan) == 0) {
        return 1;  // Jika tebakan benar
    }
    return 0;  // Jika tebakan salah
}

int main() {
    char kata[50];  // Kata yang harus ditebak
    char terungkap[50] = {0};  // Status huruf yang terungkap
    char tebakan[50];  // Kata yang ditebak oleh pemain
    int peluang = MAX_PELUANG;

    // Inisialisasi random seed
    srand(time(NULL));

    // Pilih kata acak untuk dimainkan
    pilihKata(kata);

    printf("Selamat datang di game Tebak Kata!\n");
    printf("Saya telah memilih sebuah kata, coba tebak apa kata tersebut!\n");
    printf("Kata yang harus ditebak memiliki %lu huruf.\n", strlen(kata));

    // Main game loop
    while (peluang > 0) {
        tampilkanHurufBenar(kata, terungkap);  // Menampilkan huruf yang sudah terungkap
        printf("Masukkan tebakan kata Anda: ");
        scanf("%s", tebakan);

        if (tebakKata(kata, tebakan)) {
            printf("Selamat! Anda berhasil menebak kata '%s'.\n", kata);
            break;  // Game selesai jika tebakan benar
        } else {
            peluang--;  // Jika tebakan salah, peluang berkurang
            printf("Tebakan Anda salah.\n");
            printf("Sisa peluang: %d\n", peluang);

            // Memberikan petunjuk huruf yang benar
            for (int i = 0; i < strlen(kata); i++) {
                if (kata[i] == tebakan[i] && terungkap[i] == 0) {
                    terungkap[i] = kata[i];  // Menambahkan huruf yang benar ke status terungkap
                }
            }
        }

        // Cek apakah semua huruf sudah terungkap
        int sudahTebak = 1;
        for (int i = 0; i < strlen(kata); i++) {
            if (terungkap[i] == 0) {
                sudahTebak = 0;
                break;
            }
        }

        // Jika semua huruf sudah terungkap, permainan selesai
        if (sudahTebak) {
            printf("Selamat! Anda berhasil menebak kata '%s'.\n", kata);
            break;
        }
    }

    if (peluang == 0) {
        printf("Game selesai. Kata yang benar adalah '%s'.\n", kata);
    }

    return 0;
}
