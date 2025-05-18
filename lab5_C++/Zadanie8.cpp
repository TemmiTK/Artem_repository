#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wyswietl_losowanie(int tab[]) {
    for (int i = 0; i < 6; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void losowanie_z_powtorzeniami(int tab[]) {
    for (int i = 0; i < 6; i++) {
        tab[i] = 1 + rand() % 49;
    }
}

void losowanie_bez_sasiadujacych(int tab[]) {
    tab[0] = 1 + rand() % 49;
    for (int i = 1; i < 6; i++) {
        do {
            tab[i] = 1 + rand() % 49;
        } while (tab[i] == tab[i - 1]);
    }
}

void losowanie_bez_powtorzen(int tab[]) {
    int uzyte[50] = {0};
    for (int i = 0; i < 6; i++) {
        int liczba;
        do {
            liczba = 1 + rand() % 49;
        } while (uzyte[liczba]);
        tab[i] = liczba;
        uzyte[liczba] = 1;
    }
}

int main() {
    srand(time(NULL));
    int losowanie[6];
    
    printf("Z powtórzeniami: ");
    losowanie_z_powtorzeniami(losowanie);
    wyswietl_losowanie(losowanie);
    
    printf("Bez sąsiadujących powtórek: ");
    losowanie_bez_sasiadujacych(losowanie);
    wyswietl_losowanie(losowanie);
    
    printf("Bez powtórek: ");
    losowanie_bez_powtorzen(losowanie);
    wyswietl_losowanie(losowanie);
    
    return 0;
}