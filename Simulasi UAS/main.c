#include <stdio.h>
#include <stdlib.h>

/*
int main () {
    int k, b, jumlah = 0;
    printf("Program penjumlahan array 2 dimensi\nMasukan Kolom Array:");
    scanf("%d", &k);
    printf("Masukan baris:");
    scanf("%d", &b);
    int x[k][b];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            printf("Masukan Bilangan pada matriks[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
            jumlah += x[i][j];
        }
    }

    printf("Penjumlahan pada matrix ini adalah: %d", jumlah);
}
*/

/*
int main () {
    int k, b;
    printf("Program mencari bilangan terkecil dan terbesar\nMasukan Kolom: ");
    scanf("%d", &k);
    printf("Masukan Baris: ");
    scanf("%d", &b);
    int x[k][b];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            printf("Masukan angka array[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    int min = x[0][0];
    int max = x[0][0];
    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            if(x[i][j] < min){
                min = x[i][j];
            };
            if(x[i][j] > max){
                max = x[i][j];
            };
        }
    }

    printf("Bilangan Max: %d\nBilangan Min: %d", max, min);

}
*/

/*
int main (){
    int k, b;
    printf("Program Matrix Terbalik\nMasukan Kolom:");
    scanf("%d", &k);
    printf("Masukan Baris: ");
    scanf("%d", &b);
    int x[k][b];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            printf("Masukan anggka pada array [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    printf("Susunan Array Asli:\n");
    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            if(j == b-1){
                printf("%d", x[i][j]);
            } else {
                printf("%d, ", x[i][j]);
            }

        }
        printf("\n");
    }


    printf("Susunan Array Terbalik:\n");
    for(int i = 0; i < k; i++){
        for(int j = b - 1; j >= 0; j--){
            if(j == 0){
                printf("%d ", x[i][j]);
            } else {
                printf("%d, ", x[i][j]);
            }

        }
        printf("\n");
    }

}
*/

/*
int main () {
    int k, b;
    printf("Program Matrix Spiral\nMasukan Kolom: ");
    scanf("%d", &k);
    printf("masukan baris: ");
    scanf("%d", &b);
    int x[k][b];

    for(int i = 0; i < k; i++){
        for(int j = 0; j < b; j++){
            printf("Masukan Bilangan Pada Array [%d][%d]: ",i ,j);
            scanf("%d", &x[i][j]);
        }
    }

    printf("Matrix Asli: \n");
        for(int i = 0; i < k; i++){
            for(int j = 0; j < b; j++){
                if (j == b-1){
                    printf("%d, ", x[i][j]);
                } else {
                    printf("%d, ", x[i][j]);
                }
            }
            printf("\n");
        }

    printf("Matrix Spiral:\n");
        for(int i = 0; i < k; i++){
            if (i % 2 == 1) {
                for(int j = b-1; j >= 0; j--){
                    if(i == k-1 && j == 0){
                        printf("%d", x[i][j]);
                    } else {
                        printf("%d, ", x[i][j]);
                    }


                }
            } else {
                for(int j = 0; j < b; j++){
                    if(i == k-1 && j == b-1){
                        printf("%d", x[i][j]);
                    } else {
                        printf("%d, ", x[i][j]);
                    }


                }
            }

        }

}
*/

/*
int main () {
    int n = 3, m = 3;
    int x [3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Diagonal Utama Matriks: ");
    for(int i = 0; i < n; i++){
        printf("\n%d", x[i][1]);
    }

}*/

/*
int Luas;

int Persegi() {
    int p, l;
    printf("Masukan Panjang Persegi Pnajang:");
    scanf("%d", &p);
    printf("Masukan Lebar Persegi Panjang: ");
    scanf("%d", &l);
    int lebar = p * l;
    return lebar;
}

int Segitiga(int *a,int *t) {
        Luas = (*a * *t)/2;
        return Luas;
}

int Faktorial (bil) {
    if ( bil ==1 ){
        return 1;
    } else {
        int F;
        return F = bil * Faktorial(bil-1);
    }
}

int main () {
        int pil, a, t, bil;
    do {

        printf("1.Luas persegi\n2.Luas Segitiga\n3.Bilangan Faktorial\n4.Keluar\nMasukan Pilihan Anda:");
        scanf("%d", &pil);
            switch(pil){
             case 1: Persegi();
             break;

             case 2:
                 printf("Masukan alas: ");
                 scanf("%d", &a);
                 printf("Masukan Tinggi: ");
                 scanf("%d", &t);
                 printf("\nLuas Segitiga: %d\n", Segitiga(&a, &t));
             break;

             case 3:
                 printf("Masukan Bilangan Faktorial:");
                 scanf("%d", &bil);
                 printf("%d Faktorial adalah %d/n", bil, Faktorial(bil));
                 break;

             case 4:
                return 0;

             default: printf("Default");
            }
    } while(pil!=4);

}
*/

/*
int main () {
    /*
    int bil = 10;
    int *tunjuk = &bil;

    printf("Isi dari var bil = %d\n", bil);
    printf("Isi dari var bil = %d\n", *tunjuk);

    printf("Alamat dari var bil = %d\n", &bil);
    printf("Alamat dari var bil = %d\n", tunjuk);

    int a = 10, b = 20, c = 30;
    int *d = &a, *e = &b, *f = &c;

    *f = *d + *f; //40

    *e = b + *f; //60
    *d = *e + a; //70

    b = *d + a;
    a = *f + b;

    printf("Nilai a = %d", a);
    printf("\nNilai b = %d", b);
    printf("\nNilai c = %d", c);


}*/

/*
// Fungsi rekursif untuk menghitung bilangan Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Basis: Fibonacci(0) = 0
    } else if (n == 1) {
        return 1; // Basis: Fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Rekursi
    }
}

int main() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Fibonacci ke-%d adalah %d\n", n, fibonacci(n));
    return 0;
}*/

/*
int cetakBilangan(angka){
    if (angka > 0 ){
        printf("%d", angka);
        cetakBilangan(angka-1);
    }

}

int main () {
    int angka;
    printf("Masukan Angka: ");
    scanf("%d", &angka);

    printf("Deret bilangan %d sampai 1 adalah : ", angka);
    cetakBilangan(angka);
    return 0;
}
*/

/*
int jumlahDeret(angka) {
    if (angka > 0){
        int jumlah = angka + jumlahDeret(angka-1);
        return jumlah;
    }
}

int main () {
    int angka;
    printf("masukan angka: ");
    scanf("%d", &angka);

    printf("Jumlah deret %d bilangan adalah: %d", angka, jumlahDeret(angka));
}
*/

int main () {
    int n;
    printf("Masukan array:");
    scanf("%d", &n);
    int x[n];

    for(int i =  0; i < n; i++){
        printf("masukan array [%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("Titik Tengah Pada Array Adalah: ");
    if(n%2 == 0){
        printf("\n%d dan %d", x[(n-1)/2], x[((n-1)/2)+1]);
    } else {
        printf("\n%d", x[(n-1)/2]);
    }
}



