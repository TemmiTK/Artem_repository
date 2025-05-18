#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    int *tablica = (int*)malloc(n * sizeof(int));
    
    printf("Podaj %d elementów: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tablica[i]);
    }
    
    int srodek = n / 2;
    if (n % 2 == 1) {
        printf("Środkowy element: %d na indeksie %d\n", tablica[srodek], srodek);
    } else {
        printf("Środkowe elementy: %d na indeksie %d, %d na indeksie %d\n",
               tablica[srodek - 1], srodek - 1, tablica[srodek], srodek);
    }

    int temp;
    int granica = (n % 2 == 0) ? srodek - 1 : srodek;
    for (int i = 0; i < granica; i++) {
        temp = tablica[i];
        tablica[i] = tablica[n - 1 - i];
        tablica[n - 1 - i] = temp;
    }
    
    printf("Odwrócona tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    
    free(tablica);
    return 0;
}