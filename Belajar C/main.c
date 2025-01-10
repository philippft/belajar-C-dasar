#include <stdio.h>
#include <stdlib.h>

#define JUDUl "Orang Gila!"
#define BILANGAN 100
/*
void main(){
    // ini buat variabel angka
    int angka = 0;
    char huruf = 'A';
    float desimal = 4.5;


    // ini buat print tulisan "Orang Gila!"
    printf("Konstanta JUDUL adalah %s\n", JUDUl);
    printf("Konstanta BILANGAN adalah %i\n", BILANGAN);

    // menggunakan fungsi put atau putchar
    puts("Ini adalah fungsi puts()");
    putchar('A');
    puts("");

    //menampilkan variabel int, char, float
    printf("variabel angka = %d\n", angka);
    printf("variabel huruf = %c\n", huruf);
    printf("variabel desimal = %.2f\n", desimal);
}*/

/*void main() {
    // membaca karakter atau mendapatkan karakter
    int usia;
    float ipk;
    char nama[20];

    printf("Masukan nama anda: ");
    //untuk variabel array tidak menggunakan simbol dan(&)
    //untuk mendeklarasikan bisa menggunakan: scanf("%[^\n]s", nama); atau gets
    gets(nama);
    printf("Masukan usia anda: ");
    scanf("%d", &usia);
    printf("Berapakah IPK anda: ");
    scanf("%f", &ipk);

    printf("\n\nNama anda adalah: %s", nama);
    printf("\nUsia anda adalah %d tahun\n", usia);
    printf("IPK anda adalah %.1f\n\n", ipk);
}*/


/*void main() {
    int a = 10;
    int b = 8;

    printf("%d\n", ++b);
    printf("%d\n", ++b);

    int hasilRelasi = a == b;
    printf("%d", hasilRelasi);
}*/

/*void main() {
    int a = 1;//true
    int b = 0;//false

    printf("a = %d", a);
    printf("\nb = %d", b);

    printf("\n a && b = %d", a && b);
    printf("\n a || b = %d", a || b);
    printf("\n !b = %d", !b);
    printf("\n a ^ b = %d", a ^ b);
}*/

// operator assignment
/*void main() {
    int a = 20;
    int b = 15;

    printf("a = %d", a);
    printf("\nb = %d", b);

    printf("\n\na & b = %d", a & b);
    printf("\na | b = %d", a | b);
    printf("\n~a = %d", ~a);
    printf(" ~b = %d", ~b);
    printf("\na ^ b =%d", a ^ b);

}*/

// operator ternary
/*void main() {
    int a = 8.8;

    printf("%s", a == 0?"Bilangan Netral":a > 0?"Bilangan Positif":"Bilangan Negatif");
}*/
/*void main() {
    int nilaiAngka = -1;
    char nilaiHuruf = nilaiAngka >= 0 && nilaiAngka <= 10?'A' : 'B';
    printf("Apakah nilai %d cukup?", nilaiAngka);
    printf("\n%s", nilaiHuruf == 'A'?"Nilai Cukup":"Nilai Tidak Cukup");
}*/

/*void main() {
    int angka;

    printf("Masukan Nilai: ");
    scanf("%d", &angka);

    if(angka >= 81 && angka <= 100) {
        printf("\nNilai A");
    } else if (angka >= 71 && angka <= 80) {
        printf("\nNilai B");
    } else {
        printf("Anda belum lulus, ulang semester depan wkwkwk");
    }

}*/

/*void main() {
    char jeniskelamin;
    int tinggi;

    printf("Apa Gender Anda?('L' untuk Laki-laki, 'P' untuk Perempuan)");
    scanf("%c", &jeniskelamin);

    if(jeniskelamin == 'L') {
        printf("Berapa Tingga Anda?");
        scanf("%d", &tinggi);
        if (tinggi >= 160) {
            printf("\nAnda Lulus!");
        }else{
            printf("\nAnda Terlalu Cebol!");
        };
    } else if (jeniskelamin == 'P'){
        printf("Berapa Tingga Anda?");
        scanf("%d", &tinggi);
        if (tinggi >= 155) {
            printf("\nAnda Lulus!");
        }else{
            printf("\nAnda Terlalu Cebol!");
        };
    } else {
        printf("Gender Tidak Ditemukan!");
    };*/

    /*int main() {
        for(int i = 10; i>1; i--){
            printf("%d", i);
        }
    }*/

    /*void main() {
        char i = 'y';
        while(i == 'y'){
            printf("Apakah Anda Ingin Perulangan Lagi(y/t)?");
            scanf(" %c", &i);
        }
        printf("\nPerulangan Sudah Selelai");
    }*/

    /*void main() {
        for(int i = 1; i <=100; i++){
                if (i == 10){
                    break;
                }
            printf("%d", i);
        }
    }*/

    /* void main () {
        for(int i = 1; i<=10; i ++){
            if( i==5 && i ==6 ){
                continue;
            }
            printf("%d", i);
        }
    } */

    /*int main () {
    int uts, uas;

    printf("ketik uts: ");
    scanf("%d", &uts);
    printf("ketik uas: ");
    scanf("%d", &uas);


    int total = uas + uts;
    float rataan = (float)total / 2;
    printf("Total : %d \n", total);
    printf("Rataan = %f \n", rataan);

    if(rataan <= 100  && rataan > 80) {
        printf("Kategori: Baik Sekali");
    } else if (rataan <= 80 && rataan > 60) {
        printf("Kategori: Baik");
    } else if (rataan <= 60 && rataan > 40) {
        printf("Kategori: Cukup");
    } else if (rataan <= 40 && rataan > 0 ) {
        printf("Kategori: Kurang");
    } else {
        printf("Kategori: Error! ");
    }

    printf("\nSelamat anda sudah selesai dengan Total nilai: %d dan rataan: %f", total, rataan); */

    int main () {

        int b1, b2, diskon, bayar;

            printf("Ketik Barang 1: ");
            scanf("%d", &b1);
            printf("Ketik Barang 2: ");
            scanf("%d", &b2);

            int total = b1 + b2;
            printf("Total belanja: %d \n", total);

            if (total <= 500000 && total >= 100000 ) {
                diskon = 10;
            } else if ( total <= 1000000 && total > 500000) {
                diskon = 15;
            } else if ( total > 1000000) {
                diskon = 20;
            } else {
                printf("Diskon tidak ada");
            }

            int totalDiskon = total - ( total * diskon / 100);
            printf("\n Total Bayar: %d \n", totalDiskon);
            printf("Ketik bayar: \n");
            scanf("%d", &bayar);
            int kembali = bayar - totalDiskon;
            if ( kembali < totalDiskon) {
                printf("Uang Anda Kurang");

            } else if (totalDiskon < kembali){
                printf("kembailan: %d", kembali);
            }


}












