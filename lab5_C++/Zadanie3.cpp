
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int porownaj(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int wyszukiwanie_binarne(int tab[], int rozmiar, int szukana, int *kroki) {
    int lewy = 0, prawy = rozmiar - 1;
    *kroki = 0;
    while (lewy <= prawy) {
        (*kroki)++;
        int srodek = lewy + (prawy - lewy) / 2;
        if (tab[srodek] == szukana) return srodek;
        if (tab[srodek] < szukana) lewy = srodek + 1;
        else prawy = srodek - 1;
    }
    return -1;
}

int main() {
    srand(time(NULL));
    int n, a, b;
    printf("Podaj n, a, b: ");
    scanf("%d %d %d", &n, &a, &b);
    int *tablica = (int*)malloc(n * sizeof(int));
    
  
    for (int i = 0; i < n; i++) {
        tablica[i] = a + rand() % (b - a + 1);
    }
    
    printf("Wylosowana tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    

    qsort(tablica, n, sizeof(int), porownaj);
    
    printf("Posortowana tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    
    int szukana, kroki;
    printf("Podaj szukaną wartość: ");
    scanf("%d", &szukana);
    
    int indeks = wyszukiwanie_binarne(tablica, n, szukana, &kroki);
    if (indeks != -1) {
        printf("Wartość %d znaleziona na indeksie %d w %d krokach\n", szukana, indeks, kroki);
    } else {
        printf("Wartość %d nie znaleziona\n", szukana);
    }
    
    free(tablica);
    return 0;
}