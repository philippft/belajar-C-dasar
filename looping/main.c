#include <stdio.h>
#include <stdlib.h>
//al awal
//ar akhir
/*
int main() {
    system("cls");
     int al, ar;
    printf("Program Deret Bilangan Asli\n");
    printf("===========================\n");
    printf("ketik bilangan awal : ");
    scanf("%d", &al);
    printf("ketik bilangan akhir : ");
    scanf("%d", &ar);

    printf("deret bilangan asli diantara %d dan %d adalah\n", al, ar);
    //buatwhile
    printf("while : ");
    int i = al + 1;
    while (i < ar) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
//buat do-while
    printf("do-while : ");
    i = al + 1;
    do {
        if (i >= ar) break;
        printf("%d ", i);
        i++;
    } while (i < ar);
    printf("\n");

    //buatfor
    printf("for : ");
    for (i = al + 1; i < ar; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
} */

void main () {

    int item1,
        item2,
        item3,
        bayar;

    printf("Program Belanja\n+++++++++++++\nKetik 3 harga item belanja\nItem 1: ");
    scanf("%d", &item1);
    printf("Item 2: ");
    scanf("%d", &item2);
    printf("Item 3: ");
    scanf("%d", &item3);

    int total = item1 + item2 + item3;
    printf("Total : %d", total);
    printf("\nPembayaran : ");
    scanf("%d", &bayar);

    int kembalian = bayar - total;
    if (bayar < total) {
        printf("\nUang Tidak Cukup");
    } else {
    printf("\nKembalian : %d", kembalian);
    }
}
