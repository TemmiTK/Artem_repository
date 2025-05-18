#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int liczba_losowan;
    printf("Podaj liczbę losowań: ");
    scanf("%d", &liczba_losowan);
    
    printf("Losowanie | Zera | Tysiące | Parzyste | Nieparzyste | Podzielne przez 3 | Suma parzystych | Suma nieparzystych\n");
    printf("---------|------|---------|----------|-------------|------------------|-----------------|-------------------\n");
    
    for (int r = 1; r <= liczba_losowan; r++) {
        int zera = 0, tysiace = 0, parzyste = 0, nieparzyste = 0, podzielne3 = 0;
        long long suma_parzystych = 0, suma_nieparzystych = 0;
        
        for (int i = 0; i < 10000; i++) {
            int liczba = rand() % 1001;
            if (liczba == 0) zera++;
            if (liczba == 1000) tysiace++;
            if (liczba % 2 == 0) {
                parzyste++;
                suma_parzystych += liczba;
            } else {
                nieparzyste++;
                suma_nieparzystych += liczba;
            }
            if (liczba % 3 == 0) podzielne3++;
        }
        
        printf("%8d | %4d | %7d | %8d | %11d | %16d | %15lld | %17lld\n",
               r, zera, tysiace, parzyste, nieparzyste, podzielne3, suma_parzystych, suma_nieparzystych);
    }
    
    return 0;
}