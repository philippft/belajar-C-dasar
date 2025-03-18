#include <stdio.h>
#include <stdlib.h>

#define MAX 101 // Maksimum jumlah vertex (gunakan indeks dari 1)

// Fungsi untuk mengecek keterhubungan graph
void cekKeterhubungan(int a[MAX][MAX], int n, int berarah) {
    int hm[MAX] = {0}; // Matrix bantuan
    int T[MAX] = {0};  // Penanda vertex yang sudah dicek
    int i, j, idx;

    // Ambil sembarang vertex pertama (vertex 1)
    T[1] = 1;
    for (i = 1; i <= n; i++) {
        if (a[1][i] == 1) {
            hm[i] = 1;
        }
    }

    //Memeriksa ketetanggan tidak berarah/ berarah
    if (berarah == 1){
        for (int i=1; i <= n; i++)
        {
            for (int j=1; j <= n; j++)
            {
                if (a[i][j] == 1 && hm[j] == 0 || a[j][i] == 1 && hm[j] == 0)
                {
                    hm[j] = 1;
                }
            }
        }

    } else {

        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (a[i][j] == 1 && hm[j] == 0)
                {
                    hm[j] = 1;
                }
            }
        }
    }

    // Iterasi untuk memeriksa keterhubungan
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (hm[j] == 1 && T[j] == 0) {
                T[j] = 1;
                for (idx = 1; idx <= n; idx++) {
                    if (a[j][idx] == 1 && hm[idx] == 0) {
                        hm[idx] = 1;
                    }
                }
            }
        }
    }

    // Cek apakah semua vertex terhubung
    int isConnected = 1;
    for (i = 1; i <= n; i++) {
        if (T[i] == 0) {
            isConnected = 0;
            break;
        }
    }

    if (isConnected)
        printf("Graph ini adalah graph terhubung.\n");
    else
        printf("Graph ini adalah graph tidak terhubung.\n");
}

// Fungsi untuk mengecek apakah graph berarah atau tidak
int cekGraphBerarah(int a[MAX][MAX], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != a[j][i]) {
                return 1; // Graph berarah
            }
        }
    }
    return 0; // Graph tak berarah
}

// Fungsi untuk menghitung derajat suatu vertex
void hitungDerajatVertex(int a[MAX][MAX], int n, int berarah) {
    if (berarah == 1) {
        printf("\nJumlah derajat per vertex serta derajat total : \n");
        for (int i = 1; i <= n; i++) {
            int derajatMasuk = 0, derajatKeluar = 0;

            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    derajatKeluar++;
                }
                if (a[j][i] == 1) {
                    derajatMasuk++;
                }
            }

            printf("Vertex %d: Derjat Masuk = %d, Derajat Keluar = %d, Total Derajat = %d\n",
                    i, derajatMasuk, derajatKeluar, derajatMasuk + derajatKeluar);
        }
    } else {
        printf("\nDerajat Setiap Vertex:\n");
        for (int i = 1; i <= n; i++) {
            int derajat = 0;
            for (int j = 1; j <= n; j++) {
                derajat += a[i][j];
            }
            printf("Vertex %d: Degree = %d\n", i, derajat);
        }
    }
}

// Fungsi untuk menghitung total derajat semua vertex
void hitungTotalDerajat(int a[MAX][MAX], int n, int berarah) {
    int totalDerajat = 0;

    if (berarah == 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    totalDerajat++;
                }
            }
        }
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                totalDerajat += a[i][j];
            }
        }
        totalDerajat /= 2;
    }

    printf("\nDerajat Semua Vertex: %d\n", totalDerajat);
}

int main() {
    int a[MAX][MAX] = {0}; // Inisialisasi matriks adjacency dengan 0
    int n, i, j;

    printf("Masukkan jumlah vertex: ");
    scanf("%d", &n);

    // Input hubungan antar vertex
    printf("\nMasukkan hubungan antar vertex:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Hubungan vertex %d dengan vertex %d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Cetak matriks adjacency
    printf("\nMatriks Adjacency:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // berarah atau engga
    int berarah = cekGraphBerarah(a, n);

    // Cek keterhubungan graph
    cekKeterhubungan(a, n, berarah);


    // Cek apakah graph berarah atau tidak
    if (berarah)
        printf("Graph ini adalah graph berarah.\n");
    else
        printf("Graph ini adalah graph tidak berarah.\n");

    // Hitung derajat vertex tertentu
    hitungDerajatVertex(a, n, berarah);
    printf("\n");
    // Hitung total derajat semua vertex
    hitungTotalDerajat(a, n, berarah);

    return 0;
}
