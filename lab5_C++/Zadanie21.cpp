#include <stdio.h>
#include <string.h>

int main() {
    char napis1[200], napis2[100];
    printf("Podaj pierwszy napis: ");
    scanf("%s", napis1);
    printf("Podaj drugi napis: ");
    scanf("%s", napis2);

    strcat(napis1, napis2);
    
    printf("Wynik: %s\n", napis1);
    return 0;
}