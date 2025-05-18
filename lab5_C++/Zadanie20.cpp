#include <stdio.h>
#include <string.h>

int main() {
    char napis[100];
    printf("Podaj napis: ");
    scanf("%s", napis);
    
    char znak;
    printf("Podaj znak do usunięcia: ");
    scanf(" %c", &znak);
    
 
    printf("Pozycje znaków: ");
    for (int i = 0; i <= strlen(napis); i++) {
        printf("%c", napis[i] == '\0' ? '!' : 'x');
    }
    printf("\n");
    

    int j = 0;
    for (int i = 0; i < strlen(napis); i++) {
        if (napis[i] != znak) {
            napis[j] = napis[i];
            j++;
        }
    }
    napis[j] = '\0';
    
    printf("Napis po usunięciu: %s\n", napis);
    return 0;
}