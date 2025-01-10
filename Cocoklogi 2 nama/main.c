#include <stdio.h>
#include <string.h>

#define MAX_NAMA 100

// Fungsi untuk menghitung persentase kesamaan antara dua string
float hitung_persentase_kesamaan(const char *nama1, const char *nama2) {
    int panjang1 = strlen(nama1);
    int panjang2 = strlen(nama2);
    int max_panjang = (panjang1 > panjang2) ? panjang1 : panjang2;
    int kesamaan = 0;

    // Menghitung jumlah karakter yang sama
    for (int i = 0; i < max_panjang; i++) {
        if (nama1[i] == nama2[i]) {
            kesamaan++;
        }
    }

    // Menghitung persentase kesamaan
    return (float)kesamaan / max_panjang * 100;
}

int main() {
    char nama1[MAX_NAMA];
    char nama2[MAX_NAMA];

    // Meminta pengguna untuk memasukkan dua nama
    printf("Masukkan nama pertama: ");
    fgets(nama1, sizeof(nama1), stdin);
    nama1[strcspn(nama1, "\n")] = 0; // Menghapus newline

    printf("Masukkan nama kedua: ");
    fgets(nama2, sizeof(nama2), stdin);
    nama2[strcspn(nama2, "\n")] = 0; // Menghapus newline

    // Menghitung persentase kesamaan
    float persentase = hitung_persentase_kesamaan(nama1, nama2);

    // Menampilkan hasil
    printf("Persentase kesamaan antara '%s' dan '%s' adalah: %.2f%%\n", nama1, nama2, persentase);

    return 0;
}
