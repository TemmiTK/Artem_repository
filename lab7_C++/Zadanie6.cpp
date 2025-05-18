#include <iostream>

using namespace std;

long int kwadratWartosc(int x) {
    return static_cast<long int>(x) * x;
}

void kwadratReferencja(int& x) {
    x *= x;
}

int main() {
    int a = 5;
    int b = 7;

    long int wynik = kwadratWartosc(a);
    cout << "Kwadrat (przez wartosc) liczby " << a << " to: " << wynik << endl;

    kwadratReferencja(b);
    cout << "Kwadrat (przez referencje) liczby po modyfikacji: " << b << endl;

    return 0;
}
