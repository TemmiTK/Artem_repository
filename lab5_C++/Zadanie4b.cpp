#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Pracownik {
    string imie, nazwisko, pesel, adres, telefon;
};

int main() {
    int n;
    cout << "Podaj liczbę pracowników: ";
    cin >> n;
    vector<Pracownik> pracownicy(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Pracownik " << i + 1 << ":\n";
        cout << "Imię: "; cin >> pracownicy[i].imie;
        cout << "Nazwisko: "; cin >> pracownicy[i].nazwisko;
        cout << "PESEL: "; cin >> pracownicy[i].pesel;
        cout << "Adres: "; cin >> pracownicy[i].adres;
        cout << "Telefon: "; cin >> pracownicy[i].telefon;
    }
   
    cout << "\nDane pracowników:\n";
    for (int i = 0; i < n; i++) {
        cout << "Pracownik " << i + 1 << ":\n";
        cout << "Imię: " << pracownicy[i].imie << "\n";
        cout << "Nazwisko: " << pracownicy[i].nazwisko << "\n";
        cout << "PESEL: " << pracownicy[i].pesel << "\n";
        cout << "Adres: " << pracownicy[i].adres << "\n";
        cout << "Telefon: " << pracownicy[i].telefon << "\n\n";
    }
    
    return 0;
}