#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
    int secret = rand() % 100 + 1; // losuje liczbę z przedziału 1–100

    int guess;

    cout << "Zgadnij liczbę z przedziału 1 do 100 (0 aby zakończyć):" << endl;

    while (true) {
        cout << "Podaj liczbę: ";
        cin >> guess;

        if (guess == 0) {
            cout << "Koniec gry. Wylosowana liczba to: " << secret << endl;
            break;
        }

        if (guess < secret) {
            cout << "Za mało!" << endl;
        } else if (guess > secret) {
            cout << "Za dużo!" << endl;
        } else {
            cout << "Brawo! Zgadłeś liczbę!" << endl;
            break;
        }
    }

    return 0;
}
