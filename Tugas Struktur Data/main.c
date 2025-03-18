#include <stdio.h>
#include <stdlib.h>

#define Items 100

struct Barang {
    int kode;
    char nama[50];
    char bahanDasar[50];
    int jumlah;
    float harga;
};

int input (struct Barang *daftar, int *banyak) {


    return 0;
}

int lihat(struct Barang *daftar, int *banyak) {
    printf("--Persedian Barang--");

    for(int i = 0; i < banyak; i++){
        printf("Data Barang ke %d:\nKode Barang: %d\nNama Barang: %s\nBahan Dasar: %s\nJumlah: %d\nHarga Per Unit: Rp.%f",
               i+1, daftar[i].kode, daftar[i].nama, daftar[i].bahanDasar, daftar[i].jumlah, daftar[i].harga);
    };
    return 0;
}


void main(){
    struct Barang daftar [Items];
    int jumlah = 0;
    int pil;
    do {
                    printf("+--------------------------------------------------+\n");
                    printf("|       TUGAS DATABASE TOKO MEBEL RAMOS            |\n");
                    printf("+--------------------------------------------------+\n");
                    printf("|                                                  |\n");
                    printf("|   1. Input Barang                                |\n");
                    printf("|   2. Lihat Stok Barang                           |\n");
                    printf("|   3. Exit                                        |\n");
                    printf("|                                                  |\n");
                    printf("|                                                  |\n");

                    printf("|                                                  |\n");
                    printf("3 ************************************************ 3\n");
                    printf("====================================================\n");
                    printf("Created by Ramos Sonya 6720806085\n");
                    printf("Date  : 16-03-2014\n");
                    printf("Time  : 11.43\n");


                    printf("PILIH [1,2,3] : ");
                    scanf("%d", &pil);



        int banyak;

        switch (pil) {
            case 1:

            printf("--Input Barang--\nMasukan Banyak Barang: ");
            scanf("%d", &banyak);

            for(jumlah; jumlah < banyak; jumlah++){
                printf("Masukan Kode Barang[%d]: ", jumlah+1);scanf("%d", &daftar[jumlah].kode);
                printf("Masukan Nama Barang[%d]: ", jumlah+1);scanf("%s", daftar[jumlah].nama);
                printf("Bahan Dasar[%d]: ", jumlah+1);scanf("%s", daftar[jumlah].bahanDasar);
                printf("Jumlah[%d]: ", jumlah+1);scanf("%d", &daftar[jumlah].jumlah);
                printf("Harga per unit[%d]: ", jumlah+1);scanf("%f", &daftar[jumlah].harga);
            } ;
            break;
            case 2:
                if (jumlah == NULL){
                    printf("Persediaan Barang Belum Ada! Masukan Barang Dengan Memlilih Input Barang");
                    break;
                }

                printf("\nDaftar Belanja:\n");
                    printf("===========================================\n");
                    printf("Kode| Nama      |Bahan  |Jumlah   |Harga  |\n");
                    printf("===========================================\n");

                    for (int i = 0; i < jumlah; i++) {
                        printf("%4d| %-10s|%5s  |%7d  |%7.2f|\n", daftar[i].kode, daftar[i].nama, daftar[i].bahanDasar, daftar[i].jumlah, daftar[i].harga);

                    }

                    printf("===========================================\n");
                            break;
            default: printf("Exit!\n");
        }
    } while (pil != 3);
}
