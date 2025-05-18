#include <stdio.h>
#include <wchar.h>

union Dane {
    int calkowita;
    float zmiennoprzecinkowa;
    char znaki[4];
    wchar_t szerokie_znaki[2];
};

void wyswietl_binarne(unsigned int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
}

int main() {
    union Dane dane;
    
    dane.calkowita = 10;
    printf("int = 10:\n");
    printf("int: %d, 0x%X, ", dane.calkowita, dane.calkowita); wyswietl_binarne(dane.calkowita); printf("\n");
    printf("float: %f\n", dane.zmiennoprzecinkowa);
    printf("char[4]: %c %c %c %c\n", dane.znaki[0], dane.znaki[1], dane.znaki[2], dane.znaki[3]);
    printf("wchar_t[2]: %lc %lc\n", dane.szerokie_znaki[0], dane.szerokie_znaki[1]);
    
    printf("\nchar[4] dla int=10 (Little Endian):\n");
    printf("Bajty: 0x%X 0x%X 0x%X 0x%X\n", 
           (unsigned char)dane.znaki[0], (unsigned char)dane.znaki[1], 
           (unsigned char)dane.znaki[2], (unsigned char)dane.znaki[3]);
    
    return 0;
}