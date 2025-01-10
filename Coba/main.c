#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tinggi;
    char k = "";
    printf("Program Segitiga Bintang");
    printf("Masukan Angka: ");
    scanf("%d", &tinggi);

    for (int i = 0; i < tinggi; i++){
        for (int j = 0; j <= i; j++){
            k = k + "*";
        }
        k = k + "\n";
    }
    return k;
}


