#include <stdio.h>
#include <string.h>

#define MAX 100

// struktur data(array) untuk item belanja
struct Barang {
    char nama[50];
    int jumlah;
    float harga;
    int status;
};

// funsgi menambahkan barang belanjaan
void tambah(struct Barang *daftar, int *nomorBarang) {
    // validasi apakah barang penuh
    if (*nomorBarang >= MAX) {
        printf("Daftar belanja penuh!\n");
        return;
    }

    printf("Ketik nama barang yang ingin dimasukan: ");
    scanf("%s", daftar[*nomorBarang].nama);

    printf("Masukkan jumlahnya: ");
    scanf("%d", &daftar[*nomorBarang].jumlah);

    printf("Masukkan harga barang: ");
    scanf("%f", &daftar[*nomorBarang].harga);

    daftar[*nomorBarang].status = 0; // set barang yang dimasukan menjadi belum lunas
    (*nomorBarang)++;
    printf("Barang berhasil ditambahkan!\n\n");
}

// fungsi membayar item belanjaan
void bayar(struct Barang *daftar, int nomorBarang) {
    if (nomorBarang == 0) {
        printf("Daftar belanja kosong! Ketik 1 dimenu untuk menambahkan item.\n\n");
        return;
    } // memastikan ada alamat jumlahitem

    int pilihan;
    float totalHarga = 0;

    // untuk menghitung total semua barang
    for (int i = 0; i < nomorBarang; i++) {
        totalHarga += daftar[i].jumlah * daftar[i].harga;
    }

    // pilihan metode pembayaran
    printf("\nPilih Metode Pembayaran:\n");
    printf("1. Lunas (bayar semua sekaligus)\n");
    printf("2. Bayar per barang\n");
    printf("Pilih: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        //pilihan untuk lunas
        case 1: {
            float uangDibayar = 0, uangInput;
            printf("\nTotal belanja: %.2f\n", totalHarga);

            // meminta uang dengan looping sampai lunas
            while (uangDibayar < totalHarga) {
                printf("Masukkan uang Anda: ");
                scanf("%f", &uangInput);
                uangDibayar += uangInput;

                if (uangDibayar < totalHarga) {
                    printf("Uang kurang sebesar %.2f. Silakan tambahkan uang.\n", totalHarga - uangDibayar);
                }
            }

            // kembalian
            float kembalian = uangDibayar - totalHarga;
            printf("Pembayaran berhasil! Kembalian Anda: %.2f\n\n", kembalian);

            // menandai semua item sebagai lunas
            for (int i = 0; i < nomorBarang; i++) {
                daftar[i].harga = 0; // set harga barang menjadi 0 karena sudah lunas
                daftar[i].status = 1; // set status menjadi lunas
            }
            break;
        }
        //pilihan untuk bayar per satu barang
        case 2: {
    printf("\nBayar Per Barang:\n");
    printf("=========================================\n");
    printf("No| Nama      |Jumlah  |Harga     |Subtotal\n");
    printf("=========================================\n");

    for (int i = 0; i < nomorBarang; i++) {
        //looping untuk menampilkan daftar yang belum lunas
        if(daftar[i].status == 0){
        float subtotal = daftar[i].jumlah * daftar[i].harga;
        printf("%2d| %-10s|%5d   |%7.2f  |%7.2f\n",
               i + 1, daftar[i].nama, daftar[i].jumlah, daftar[i].harga, subtotal);
        }
    }

    int no;
    printf("Pilih barang yang ingin dibayar (berdasarkan nomor): ");
    scanf("%d", &no);
    no--; // mengurangi nomor untuk index array suatu barang

    //validasi nomor yang di ketik
    if (no < 0 || no >= nomorBarang) {
        printf("Nomor item tidak valid!\n");
        return;
    }

    //pembayaran
    if (daftar[no].status == 0) {
        float uangDibayar = 0, subtotal;
        int jumlahBayar;

        printf("Berapa Barang %s yang ingin dibayar: ", daftar[no].nama);
        scanf("%d", &jumlahBayar);

        //validasi jumlah item yang ingin di bayar
        if (jumlahBayar > daftar[no].jumlah) {
            printf("Jumlah pembayaran melebihi jumlah barang belanjaan!\n");
            return;
        }

        subtotal = daftar[no].harga * jumlahBayar;

        //looping untuk melunasi pembayaran
        while (uangDibayar < subtotal) {
            printf("Masukkan uang bayar untuk %s (subtotal: %.2f): ", daftar[no].nama, subtotal);
            float uangInput;
            scanf("%f", &uangInput);
            uangDibayar += uangInput;

            if (uangDibayar < subtotal) {
                printf("Uang kurang sebesar %.2f. Silakan tambahkan uang.\n", subtotal - uangDibayar);
            }
        }

        printf("Pembayaran berhasil!\n");
        daftar[no].jumlah -= jumlahBayar;



        // cek apakah barang sudah habis
        if (daftar[no].jumlah == 0) {
            daftar[no].harga = 0;
            daftar[no].status = 1; //set status menjadi lunas
        }
    } else {
        printf("Barang ini sudah lunas!\n");
    }
  break;
}

        default:
            printf("Pilihan tidak valid! Kembali ke menu utama.\n\n");
        }
        }




// fungsi menampilkan semua daftar belanjaan
void tampilan(struct Barang *daftar, int nomorBarang) {
    if (nomorBarang == 0) {
        printf("Daftar belanja masih kosong. Tambahkan item terlebih dahulu.\n\n");
        return;
    }

    printf("\nDaftar Belanja:\n");
    printf("===================================================================\n");
    printf("No| Nama      |Jumlah  |Harga     |Total     |Status\n");
    printf("===================================================================\n");

    float totalHarga = 0;
    for (int i = 0; i < nomorBarang; i++) {
        float subtotal = daftar[i].jumlah * daftar[i].harga;
        totalHarga += subtotal;
        printf("%2d| %-10s|%5d   |%7.2f  |%9.2f |%s\n",
               i + 1, daftar[i].nama, daftar[i].jumlah, daftar[i].harga, subtotal,
               daftar[i].status ? "Lunas" : "Belum Lunas");
    }

    printf("===================================================================\n");
    printf("Total Harga: %.2f\n\n", totalHarga);
    printf("===================================================================\n");
}

// Fungsi untuk menghapus item dari daftar belanja
void hapus(struct Barang *daftar, int *nomorBarang) {
    //validasi apakah daftar belanja masih kosong
    if (*nomorBarang == 0) {
        printf("Daftar belanja masih kosong. Tidak ada barang yang bisa dihapus.\n\n");
        return;
    }

    int index;
    printf("Masukkan nomor barang yang ingin dihapus: ");
    scanf("%d", &index);

    //validasi nomor yang dipilih
    if (index < 1 || index > *nomorBarang) {
        printf("Nomor item tidak valid!\n\n");
        return;
    }

    //proses penghapusan barang
    for (int i = index - 1; i < *nomorBarang - 1; i++) {
        daftar[i] = daftar[i + 1];
    }

    /*
    1. kopi
    2. roti
    3. air
    4. gula

    1. kopi
    2. air
    3. gula
    4.

    */


    // mengurangi nomor
    (*nomorBarang)--;
    /*
    1. kopi
    2. air
    3. gula
    */
    printf("Barang berhasil dihapus!\n\n");
}

//fungsi utama dalam menjalankan program kasir
int main() {
    struct Barang daftar[MAX];
    int nomorBarang = 0;
    int pilihan;

    do {
        tampilan(daftar, nomorBarang);
        printf("Menu Kasir:\n");
        printf("1. Tambah Barang\n");
        printf("2. Bayar Barang\n");
        printf("3. Hapus Barang\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambah(daftar, &nomorBarang);
                break;
            case 2:
                bayar(daftar, nomorBarang);
                break;
            case 3:
                hapus(daftar, &nomorBarang);
                break;
            case 4:
                printf("Terima kasih telah menggunakan kasir kami!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n\n");
        }
    } while (pilihan != 4);
    return 0;
}
