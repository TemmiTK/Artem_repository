#include <stdio.h>

struct Siec {
    unsigned int w_zakresie : 1;
    unsigned int maska : 32;
    unsigned int adres_ip : 32;
};

int main() {
    struct Siec dane;

    int liczba = 7;
    dane.w_zakresie = (liczba >= -3 && liczba < 7) || (liczba > 7 && liczba <= 21);
    printf("Czy 7 należy do zakresu? %d (1=tak, 0=nie)\n", dane.w_zakresie);
    
    dane.maska = 0xFFFFFF00; 
    dane.adres_ip = (192 << 24) | (168 << 16) | (0 << 8) | 130; 
    
    unsigned int podsiec = dane.adres_ip & dane.maska;
    unsigned int host = dane.adres_ip & ~dane.maska;
    
    printf("Adres IP: 0x%X\n", dane.adres_ip);
    printf("Maska: 0x%X\n", dane.maska);
    printf("Podsieć: 0x%X\n", podsiec);
    printf("Host: 0x%X\n", host);
    
    return 0;
}