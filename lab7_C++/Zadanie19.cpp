#include <iostream>
using namespace std;

int dlugoscEfektywna(const char* tekst) {
    int dlugosc = 0;
    while (tekst[dlugosc] != '\0') {
        dlugosc++;
    }
    return dlugosc;
}

int main() {
    char tekst[100];
    cout << "Podaj tekst: ";
    cin.getline(tekst, 100);

    int wynik = dlugoscEfektywna(tekst);
    cout << "Długość efektywna ciągu: " << wynik << endl;
    return 0;
}
