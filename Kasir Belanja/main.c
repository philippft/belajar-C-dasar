#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

// Struktur data untuk item belanja
struct Item {
    char nama[50];
    int jumlah;
    float harga;
};

// Fungsi untuk menambahkan item ke daftar belanja
void tambahItem(struct Item *daftar, int *jumlahItem) {
    if (*jumlahItem >= MAX_ITEMS) {
        printf("Daftar belanja penuh!\n");
        return;
    }

    printf("Masukkan nama item: ");
    scanf("%s", daftar[*jumlahItem].nama);

    printf("Masukkan jumlah item: ");
    scanf("%d", &daftar[*jumlahItem].jumlah);

    printf("Masukkan harga item: ");
    scanf("%f", &daftar[*jumlahItem].harga);

    (*jumlahItem)++;
    printf("Item berhasil ditambahkan!\n\n");
}

void bayarItem (struct Item *daftar, int *jumlahItem) {
    int pil;
    printf("Pilih Metode Bayar:\n1.Lunas\n2.Bayar Per Item");
    scanf("%d", &pil);

    switch (pil) {
        float totalHarga = 0;
        float lunas = 0;
        case 1:

            for (int i = 0; i < jumlahItem; i++) {
            float subtotal = daftar[i].jumlah * daftar[i].harga;
            totalHarga += subtotal;
            lunas = totalHarga - totalHarga;
            //printf("%2d| %-10s|%5d   |%7.2f  |%7.2f\n", i + 1, daftar[i].nama, daftar[i].jumlah, daftar[i].harga, subtotal);
            };
            printf("Lunas: %d", lunas);
        break;
    }
}

// Fungsi untuk menampilkan daftar belanja
void tampilkanDaftar(struct Item *daftar, int jumlahItem) {
    if (jumlahItem == 0) {
        printf("Daftar belanja masih kosong, isi barang anda dengan ketik 1\n\n");
        return;
    }

    printf("\nDaftar Belanja:\n");
    printf("=========================================\n");
    printf("No| Nama      |Jumlah  |Harga     |Total|\n");
    printf("=========================================\n");

    float totalHarga = 0;
    for (int i = 0; i < jumlahItem; i++) {
        float subtotal = daftar[i].jumlah * daftar[i].harga;
        totalHarga += subtotal;
        printf("%2d| %-10s|%5d   |%7.2f  |%7.2f\n", i + 1, daftar[i].nama, daftar[i].jumlah, daftar[i].harga, subtotal);
    }

    printf("=========================================\n");
    printf("Total Harga: %.2f\n\n", totalHarga);
    printf("=========================================\n");
}

// Fungsi untuk menghapus item dari daftar belanja
void hapusItem(struct Item *daftar, int *jumlahItem) {
    if (*jumlahItem == 0) {
        printf("Daftar belanja masih kosong, tidak ada item yang bisa dihapus. Isi barang anda dengan ketik 1\n\n");
        return;
    }

    int index;
    printf("Masukkan nomor item yang ingin dihapus: ");
    scanf("%d", &index);

    if (index < 1 || index > *jumlahItem) {
        printf("Nomor item tidak ada!\n\n");
        return;
    }

    for (int i = index - 1; i < *jumlahItem - 1; i++) {
        daftar[i] = daftar[i + 1];
    }

    (*jumlahItem)--;
    printf("Item berhasil dihapus!\n\n");
}

int main() {
    struct Item daftar[MAX_ITEMS];
    int jumlahItem = 0;
    int pilihan;

    do {
        tampilkanDaftar(daftar, jumlahItem);
        printf("Menu Kasir:\n");
        printf("1. Tambah Item\n");
        printf("2. Bayar Belanjaan\n");
        printf("3. Hapus Item\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahItem(daftar, &jumlahItem);
                break;
            case 2:
                bayarItem(daftar, jumlahItem);
                break;
            case 3:
                hapusItem(daftar, &jumlahItem);
                break;
            case 4:
                printf("Terima kasih telah menggunakan program kasir!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n\n");
        }
    } while (pilihan != 4);
    return 0;
}
