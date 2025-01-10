#include <stdio.h>
#include <stdlib.h>

/*int main(){
    int n;
    printf("Program Bilangan \nKetik Jumlah Bilangan: ");
    scanf("%d", &n);

    float bil[n], total, rata;
    for (int i = 0; i < n; i++){
        printf("Bil-%d: ", i+1);
        scanf("%f", &bil[i]);
        total += bil[i];
    };
    printf("total: %2.f\n", total);
    rata = total/n;
    printf("Rata-rata: %2.f", rata);
}*/

/*void main () {
    int n;
    printf("Program Bilangan \nKetik Jumlah Bilangan: ");
    scanf("%d", &n);

    int bil[n], b;
    for (int i=0; i < n; i++){
        printf("Bil-%d: ", i+1);
        scanf("%d", &b);
        bil[i] = b;
    }

    printf("\nBilangan Ganjil Pada Array: ");
    for(int i=0; i < n; i++){
        if (bil[i] % 2 == 1){
            printf("%d ", bil[i]);
        }
    }

}*/

/*void main () {
    int n;

    printf("Program Nilai Mahasiswa\nKetik Jumlah Mahasiswa:\n");
    scanf("%d", &n);
    float mhs[n], total = 0;
    printf("Masukan %d Nilai Mahasiswa:\n", n);
    for(int i = 0; i < n; i++){
        printf("Nilai Mahasiswa-%d: ", i+1);
        scanf("%f", &mhs[i]);
        total += mhs[i];
    }
    printf("Nilai Mahasiswa");
    for(int j = 0; j < n; j++){
        if(j == n-1){
            printf(" %d ", j+1);
        }else {
            printf(" %d,", j+1);
        }
    }
    printf("Secara Berurutan Adalah: ");
    for(int i = 0; i < n; i++){
        if(i == n-1){
            printf("%.2f", mhs[i]);
        } else {
            printf("%.2f, ", mhs[i]);
        }
    }
    printf("\nTotal Nilai %d Mahasiswa adalah: %.2f", n, total);
    float rata;
    rata = total / n;
    printf("\nRata-rata Nilai %d Mahasiswa adalah: %.2f", n, rata);

}*/

/*void main () {
    int n, nilai;
    printf("Program Nilai Mahasiswa:\nKetik Jumlah Mahasiswa: ");
    scanf("%d", &n);
    int mhs[n];
    for(int i = 0; i < n; i++){
        printf("Nilai Mhs-%d: ", i+1);
        scanf("%d", &nilai);
        mhs[i] = nilai;
    }
    printf("\nData Nilai Mhs: ");
    for(int i = 0; i < n; i++){
        if (i == n-1){
            printf(" %d ", mhs[i]);
        } else {
            printf(" %d,", mhs[i]);
        }
    }
    printf("\nNilai Tertinggi: ");
    int max = mhs[0];
    for(int i = 0; i < n; i++){
        if (max < mhs[i]){
            max = mhs[i];
        }
    }
    printf("%d", max);

}*/


/*void main () {
    int n, total = 0;
    printf("Ketik Jumlah Bilangan: ");
    scanf("%d", &n);

    int x[n];

    for(int i = 0; i < n; i++){
        printf("Bil-%d: ", i+1);
        scanf("%d", &x[i]);
        total += x[i];
    }
    printf("\nBilangan Yang Diketik: ");
    for(int i=n; i > 0; i--){
        printf("\nBil-%d: %d", i, x[i-1]);
    }
    int max = x[0];
    for(int i = 0; i < n; i++){
        if( max < x[i]){
            max = x[i];
        }
    }
    int min = x[0];
    printf("\nBilangan maksimum: %d", max);
    for(int i = 0; i < n; i++){
        if (min > x[i]){
            min = x[i];
        }
    }
    printf("\nBilangan minimum; %d", min);
    float rata = total /n;
    printf("\nRata-rata: %.2f", rata);
    if(n % 2 == 0){

        int tengah = n/2;
        printf("Angka Tengah: %d dan %d", x[tengah], x[tengah-1]);
    } else if (n % 2 == 1) {
        int tengah = n+1/2;
        printf("\nAngka Tengah: %d", x[tengah]);
    }
}*/

void main (){
    int bar, kol;
    printf("program Bilangan\nKetik Jumlah Baris: ");
    scanf("%d", &bar);
    printf("\Ketik Jumlah Kolom: ");
    scanf("%d", &kol);
    int x[bar][kol], total = 0;
    for(int i = 0; i < bar; i++){
        for(int j = 0; j < kol; j++){
            printf("x[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
            total += x[i][j];
        }
    }
    printf("Data Yang Diinput Adalah: \n");
    for(int i = 0; i < bar; i++){
        for(int j = 0; j < kol; j++){
            printf("x[%d][%d]: %d\n", i, j, x[i][j]);
        }
    }
    int max = x[0][0];
    for(int i = 0; i < bar; i++){
        for(int j = 0; j < kol; j++){
            if(max < x[i][j]){
                max = x[i][j];
            }
        }
    }
    printf("\nBilanan Maksimum: %d", max);
    int min = x[0][0];
    for(int i = 0; i < bar; i++){
        for(int j = 0; j < kol; j++){
            if(min > x[i][j]){
                min = x[i][j];
            }
        }
    }
    printf("\nBilanan Maksimum: %d", min);
    int rata = total/(bar * kol);
    printf("\nRata-rata: %d", rata);
}
