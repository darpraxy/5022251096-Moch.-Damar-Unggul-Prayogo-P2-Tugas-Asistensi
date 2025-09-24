// Benarkan Code ini



#define N 3  // ini untuk deklarasi size matrix berapa (biar tetap seimbang saat perkalian matrix)

sum = 0; // Ini adalah hasil perbaikan.

void read_matrix(int M[N][N]) { // Saya memperbaiki kesalahan di sini, dari yang semula menggunakan variabel x, y menjadi variabel N, N agar sesuai dengan deklarasi size matrix 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) // Saya memerbaiki kesalahan di sini, dari yang semula 'k < N' menjadi 'j < N'
            scanf("%d", &M[i][j]); // Saya memperbaiki kesalahan di sini, dari yang semula '%lf' menjadi '%d', dikarenakan tipe data matriks ini adalah int, bukanlah double.
}

void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            //sum = 0; // Di sini deklarasi sum harusnya di luar fungsi multiply.
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]); // Saya memperbaiki kesalahan di sini, dari yang semula '%c' menjadi '%d', dikarenakan tipe data matriks ini adalah int, bukanlah character.
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N], B[N][N], C[N][N];

    read_matrix(A);
    read_matrix(B); // Baris ini awalnya kurang tanda ";", sehingga saya menambahkannya agar kode dapat berjalan.

    multiply(A, B, C);

    printf("Hasil Kali matrix: \n");
    print_matrix(C);
    return 0;
}
