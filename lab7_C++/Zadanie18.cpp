#include <iostream>
using namespace std;

int liczBity(unsigned int liczba) {
    int licznik = 0;
    while (liczba) {
        if (liczba & 1) licznik++;
        liczba >>= 1;
    }
    return licznik;
}

int main() {
    unsigned int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;

    int wynik = liczBity(liczba);
    cout << "Liczba bitów ustawionych na 1: " << wynik << endl;
    return 0;
}
