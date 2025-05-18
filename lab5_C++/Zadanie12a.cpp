#include <stdio.h>
#define N 5

int main() {
    int macierz_a[N][N], macierz_b[N][N];
    

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            macierz_a[i][j] = j + 1;
        }
    }
    
    printf("Oryginalna macierz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", macierz_a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            macierz_b[i][j] = macierz_a[j][i];
        }
    }
    
    printf("Macierz transponowana:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", macierz_b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}