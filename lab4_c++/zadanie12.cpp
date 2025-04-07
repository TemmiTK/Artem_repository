#include <iostream>
#include <limits>

using namespace std;


enum BitMask {
    BIT_0 = 1,       
    BIT_1 = 2,       
    BIT_2 = 4,      
    BIT_3 = 8,       
    BIT_4 = 16,      
    BIT_5 = 32,      
    BIT_6 = 64,      
    BIT_7 = 128    
};
int main() {
    int number, bit;
    

    cout << "Podaj liczbę (zakres 0-255): ";
    cin >> number;
    
    if (cin.fail() || number < 0 || number > 255) {
        cout << "Błąd: Podano niepoprawną liczbę. Proszę podać liczbę z zakresu 0-255." << endl;
        return 1;
    }

    cout << "Podaj numer bitu (zakres 0-7): ";
    cin >> bit;
    
    if (cin.fail() || bit < 0 || bit > 7) {
        cout << "Błąd: Podano niepoprawny numer bitu. Proszę podać bit z zakresu 0-7." << endl;
        return 1;
    }
    bool isBitSet = (number & (1 << bit)) != 0;
  cout << (isBitSet ? "TAK" : "NIE") << endl;

    return 0;
}
