#include <iostream>
using namespace std;

int czyPrzestepny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int rok;
    cout << "Podaj rok: ";
    cin >> rok;

    if (czyPrzestepny(rok))
        cout << "To jest rok przestępny." << endl;
    else
        cout << "To nie jest rok przestępny." << endl;

    return 0;
}
