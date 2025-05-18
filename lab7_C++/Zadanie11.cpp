#include <iostream>
#include <initializer_list>
#include <limits>

using namespace std;

void analizujCiag(initializer_list<unsigned int> liczby) {
    unsigned int licznik = 0;
    unsigned int suma = 0;
    unsigned long long iloczyn = 1;
    unsigned int min = numeric_limits<unsigned int>::max();
    unsigned int max = numeric_limits<unsigned int>::min();

    for (unsigned int liczba : liczby) {
        if (liczba == 0) break;
        licznik++;
        suma += liczba;
        iloczyn *= liczba;
        if (liczba < min) min = liczba;
        if (liczba > max) max = liczba;
    }

    cout << "Liczba elementów: " << licznik << endl;
    cout << "Suma: " << suma << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << max << endl;
}

int main() {
    analizujCiag({5, 3, 8, 2, 0, 9}); // 0 kończy ciąg
    return 0;
}
