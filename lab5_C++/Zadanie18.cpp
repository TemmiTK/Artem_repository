#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int tablica[3][3][3], suma = 0;
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                tablica[i][j][k] = rand() % 100;
                suma += tablica[i][j][k];
            }
        }
    }
    
    printf("Suma elementów: %d\n", suma);
    return 0;
}