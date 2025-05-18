#include <iostream>

using namespace std;

int pobierzElementIZliczNiezerowe(int i, int tablica[], int n, int& liczbaNiezerowych) {
    liczbaNiezerowych = 0;
    for (int j = 0; j < n; j++) {
        if (tablica[j] != 0) {
            liczbaNiezerowych++;
        }
    }
    if (i >= 0 && i < n) {
        return tablica[i];
    } else {
        cout << "Błąd: indeks poza zakresem." << endl;
        return -1;
    }
}

int main() {
    int tablica[] = {5, 0, 3, 0, 8, 2};
    int n = sizeof(tablica) / sizeof(tablica[0]);
    int indeks = 4;
    int niezerowe = 0;

    int wartosc = pobierzElementIZliczNiezerowe(indeks, tablica, n, niezerowe);

    cout << "Element o indeksie " << indeks << ": " << wartosc << endl;
    cout << "Liczba elementów różniących się od zera: " << niezerowe << endl;

    return 0;
}
