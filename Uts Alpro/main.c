#include <stdio.h>

/*int main() {
    int n, i, j;
    int a = 0, b = 1, temp;

    // Meminta input jumlah deret Fibonacci yang ingin dihitung
    printf("Masukkan jumlah deret Fibonacci: ");
    scanf("%d", &n);

    // Menangani kasus khusus jika hanya ada satu angka
    if (n == 1) {
        printf("Deret Fibonacci terbalik: 0\n");
        return 0;
    }

    // Variabel untuk menyimpan nilai Fibonacci
    int fib1 = 1, fib2 = 1;

    // Proses untuk menghasilkan nilai Fibonacci pertama dan kedua
    for (i = 2; i < n; i++) {

        temp = fib1 + fib2; // Menghitung angka Fibonacci selanjutnya
        fib1 = fib2;        // Memperbarui fib1
        fib2 = temp;        // Memperbarui fib2
        printf("%d ", fib2);
    }

    //Mencetak Bilangan Fibonaci
    printf("\nBilangan Deret Fibonaci Turun: ");
    for(i = n - 1; i >= 0; i--){
        printf("%d ", fib2);
        temp = fib2 - fib1;
        fib2 = fib1;
        fib1 = temp;
    }


    printf("\n");


    return 0;
}*/


/*int main() {
    int l, t;

    // Meminta pengguna untuk memasukkan ukuran persegi
    printf("Masukkan tinggi persegi: ");
    scanf("%d", &t);
    printf("Masukkan lebar persegi: ");
    scanf("%d", &l);
    printf("Masukkan angka: \n");

    // Loop untuk mencetak persegi
    for (char i = 1; i <= t; i++) {
        for (int j = 1; j <= l; j++) {
            printf("*", i);
        }
        printf("\n"); // Pindah ke baris berikutnya setelah satu baris selesai
    }

    return 0;
}*/


/*int main () {
    int awal, akhir, k;
    printf("Masukkan Angka Awal: ");
    scanf("%d", &awal);
    printf("Masukkan Angka Akhir: ");
    scanf("%d", &akhir);
    printf("Masukan Kelipatan: ");
    scanf("%d", &k);

    for (int i = awal + 1; i <= akhir; i = i + k){
        printf("%d ", i);
    }

}*/

/*int main(){
    int t, i, j;
    printf("Segitiga Bintang\n");
    printf("Masukkan tinggi: ");
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int k = t; k > 0; k--)
    {
        for (int l = 0; l < k; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/


int main() {
    int n, a = 0, b = 1, next;

    // Meminta pengguna untuk memasukkan jumlah bilangan Fibonacci yang ingin dicetak
    printf("Masukkan jumlah bilangan Fibonacci yang ingin dicetak: ");
    scanf("%d", &n);

    printf("Deret Fibonacci:\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // Untuk i = 0 dan i = 1, bilangan Fibonacci adalah i itu sendiri
        } else {
            next = a + b; // Bilangan Fibonacci berikutnya adalah jumlah dua bilangan sebelumnya
            a = b; // Memperbarui nilai a
            b = next; // Memperbarui nilai b
        }
        printf("%d\n", next); // Mencetak bilangan Fibonacci
    }

    return 0;
}

