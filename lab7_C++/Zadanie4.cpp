#include <iostream>
#include <initializer_list>
#include <limits>

using namespace std;

void analizujCiag(initializer_list<unsigned int> liczby) {
    unsigned int licznik = 0;
    unsigned int suma = 0;
    unsigned long long iloczyn = 1;
    unsigned int minimum = numeric_limits<unsigned int>::max();
    unsigned int maksimum = numeric_limits<unsigned int>::min();

    for (unsigned int liczba : liczby) {
        if (liczba == 0) {
            break;
        }
        licznik++;
        suma += liczba;
        iloczyn *= liczba;
        if (liczba < minimum) minimum = liczba;
        if (liczba > maksimum) maksimum = liczba;
    }

    if (licznik == 0) {
        cout << "Ciąg nie zawiera żadnych elementów." << endl;
    } else {
        cout << "Liczba elementów: " << licznik << endl;
        cout << "Suma: " << suma << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Minimum: " << minimum << endl;
        cout << "Maksimum: " << maksimum << endl;
    }
}

int main() {
    analizujCiag({4, 7, 2, 8, 0, 10, 12});
    return 0;
}
