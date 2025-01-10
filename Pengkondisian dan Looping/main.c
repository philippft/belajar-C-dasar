#include <stdio.h>
#include <stdlib.h>

int main (){

    system("cls");
    int pil, awal, akhir;
    printf("Program Deret Bilangan Asli  \n");
    printf("-------------------------------- \n");
    printf ("Menu : \n 1. Deret Ascending \n 2. Deret Descending \n");

    printf("Pilihan : ");
    scanf("%d",&pil);

    printf("Ketik bilangan awal : ");
    scanf("%d",&awal);
    printf("Ketik bilangan akhir : ");
    scanf("%d",&akhir);


    switch (pil){
        case 1:

            while (awal < akhir) {
                printf("%d ", awal);
                awal++;
            }
            break;
        case 2:
            for (int i = awal - 1; i > akhir; i--){
                printf("%d", i);
            };
            break;
        default:
            printf("Pilihan salah!\n");
            return 0;
        }

}
