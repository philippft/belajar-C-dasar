#include <stdio.h>
#include <stdlib.h>

int main() {
    int nilai;
    printf("Masukan Nila: ");
    scanf("%d", &nilai);

    switch (nilai) {
    case 80:
        if (nilai <= 100 && nilai >80){
        printf("Nilai Anda Sangat Baik");
        };
        break;
    case 2 :
        if (nilai <= 80 && nilai > 60){
        printf("Nilai Anda Baik");
        };
        break;
    default :
        printf("Nilai Error!");
        break;
    }
}
