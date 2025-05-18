#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int tablica[15];
    
    printf("Oryginalna tablica: ");
    for (int i = 0; i < 15; i++) {
        tablica[i] = rand() % 100;
        printf("%d ", tablica[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 14; i++) {
        int min_indeks = i;
        for (int j = i + 1; j < 15; j++) {
            if (tablica[j] < tablica[min_indeks]) {
                min_indeks = j;
            }
        }
        int temp = tablica[i];
        tablica[i] = tablica[min_indeks];
        tablica[min_indeks] = temp;
    }
    
    printf("Posortowana tablica: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    
    return 0;
}
