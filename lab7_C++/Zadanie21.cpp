#include <iostream>
#include <string>
using namespace std;

int hexNaDec(const string& hex) {
    if (hex.length() < 3 || (hex[0] != '0' || (hex[1] != 'x' && hex[1] != 'X')))
        return -1;

    int wynik = 0;
    for (size_t i = 2; i < hex.length(); i++) {
        char znak = hex[i];
        int wartosc;

        if (znak >= '0' && znak <= '9')
            wartosc = znak - '0';
        else if (znak >= 'A' && znak <= 'F')
            wartosc = znak - 'A' + 10;
        else if (znak >= 'a' && znak <= 'f')
            wartosc = znak - 'a' + 10;
        else
            return -1;

        wynik = wynik * 16 + wartosc;
    }

    return wynik;
}

int main() {
    string hex;
    cout << "Podaj liczbę szesnastkową (np. 0x1F): ";
    cin >> hex;

    int wynik = hexNaDec(hex);

    if (wynik == -1)
        cout << "Niepoprawna liczba szesnastkowa." << endl;
    else
        cout << "Wartość dziesiętna: " << wynik << endl;

    return 0;
}
