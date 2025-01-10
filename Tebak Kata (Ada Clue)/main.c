#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PELUANG 5  // Batas peluang tebakan
#define UNGKAP_HURUF 2  // Jumlah huruf yang diungkap di awal permainan

// Fungsi untuk memilih kata acak dari daftar kata
void pilihKata(char *kata) {
    const char *daftarKata[] = {"pemrograman", "komputer", "bahasa", "informatika", "algoritma",
        "data", "struktur", "fungsi", "variabel", "array",
        "pointer", "loop", "kondisi", "debugging", "kompilasi",
        "sintaks", "logika", "eksekusi", "program", "software",
        "hardware", "jaringan", "database", "sistem", "aplikasi",
        "web", "mobile", "cloud", "keamanan", "enkripsi",
        "dekripsi", "analisis", "pengembangan", "teknologi", "inovasi",
        "robotika", "kecerdasan", "buatan", "machine", "learning",
        "big", "data", "visualisasi", "statistik", "matematika",
        "teori", "kompleksitas", "optimasi", "simulasi", "prototipe",
        "pengujian", "implementasi", "integrasi", "pengelolaan", "proyek",
        "kolaborasi", "komunikasi", "strategi", "perencanaan", "evaluasi",
        "feedback", "iterasi", "pengalaman", "pengetahuan", "keterampilan",
        "pengguna", "antarmuka", "desain", "grafis", "interaktif",
        "pengembangan", "berkelanjutan", "sumber", "terbuka", "komunitas",
        "standar", "prosedur", "dokumentasi", "tutorial", "bantuan",
        "sumberdaya", "penggunaan", "efisiensi", "produktivitas", "kualitas",
        "pengukuran", "metode", "analisis", "riset", "pengembangan",
        "kreativitas", "inspirasi", "kolaborasi", "komunitas", "jaringan",
        "pengalaman", "pembelajaran", "penelitian", "pengembangan", "teknis"
        };
    int index = rand() % 100;  // Memilih indeks acak
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

// Fungsi untuk mengecek apakah semua huruf sudah terungkap
int semuaHurufTerungkap(char *terungkap, int panjangKata) {
    for (int i = 0; i < panjangKata; i++) {
        if (terungkap[i] == 0) {
            return 0;
        }
    }
    return 1;
}

// Fungsi untuk mengungkap beberapa huruf di awal permainan
void ungkapHurufAwal(char *kata, char *terungkap, int jumlahHuruf) {
    int panjangKata = strlen(kata);
    int diungkap = 0;

    while (diungkap < jumlahHuruf) {
        int index = rand() % panjangKata;
        if (terungkap[index] == 0) {
            terungkap[index] = kata[index];
            diungkap++;
        }
    }
}

int main() {
    char kata[50];  // Kata yang harus ditebak
    char terungkap[50] = {0};  // Status huruf yang terungkap
    char tebakan[50];  // Kata atau huruf yang ditebak oleh pemain
    int peluang = MAX_PELUANG;

    // Inisialisasi random seed
    srand(time(NULL));

    // Pilih kata acak untuk dimainkan
    pilihKata(kata);

    // Ungkap beberapa huruf di awal permainan
    ungkapHurufAwal(kata, terungkap, UNGKAP_HURUF);

    printf("Selamat datang di game Tebak Kata!\n");
    printf("Saya telah memilih sebuah kata, coba tebak apa kata tersebut!\n");
    printf("Kata yang harus ditebak memiliki %lu huruf.\n\n", strlen(kata));

    // Main game loop
    while (peluang > 0) {
        tampilkanHurufBenar(kata, terungkap);  // Menampilkan huruf yang sudah terungkap
        printf("Masukkan tebakan huruf atau kata Anda: ");
        scanf("%s", tebakan);

        if (strlen(tebakan) == 1) {
            // Tebakan berupa satu huruf
            int hurufBenar = 0;
            for (int i = 0; i < strlen(kata); i++) {
                if (kata[i] == tebakan[0] && terungkap[i] == 0) {
                    terungkap[i] = kata[i];
                    hurufBenar = 1;
                }
            }

            if (hurufBenar) {
                printf("Huruf '%c' ada dalam kata.\n\n", tebakan[0]);
            } else {
                peluang--;
                printf("Huruf '%c' tidak ada dalam kata.\n", tebakan[0]);
                printf("Sisa peluang: %d\n\n", peluang);
            }
        } else {
            // Tebakan berupa kata
            if (strcmp(kata, tebakan) == 0) {
                printf("Selamat! Anda berhasil menebak kata '%s'.\n", kata);
                break;
            } else {
                // Ungkap huruf dengan posisi yang sesuai
                for (int i = 0; i < strlen(kata); i++) {
                    if (kata[i] == tebakan[i] && terungkap[i] == 0) {
                        terungkap[i] = kata[i];
                    }
                }

                peluang--;
                printf("Tebakan Anda salah.");
                printf(" Huruf yang sesuai telah diungkap.\n");
                printf("Sisa peluang: %d\n\n", peluang);
            }
        }

        // Cek apakah semua huruf sudah terungkap
        if (semuaHurufTerungkap(terungkap, strlen(kata))) {
            printf("Selamat! Anda berhasil menebak kata '%s'.\n", kata);
            break;
        }
    }

    if (peluang == 0) {
        printf("Game selesai. Kata yang benar adalah '%s'.\n", kata);
    }
    return 0;
}
