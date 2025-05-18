#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int macierz[10][10], suma = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            macierz[i][j] = (i == j) ? i : rand() % 100;
            if (i == j) suma += macierz[i][j];
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d", macierz[i][j]);
        }
        printf("\n");
    }
    
    printf("Suma przekątnej: %d\n", suma);
    return 0;
}