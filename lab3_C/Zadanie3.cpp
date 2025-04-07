#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Podaj wspolczynnik a: ";
    cin >> a;
    cout << "Podaj wspolczynnik b: ";
    cin >> b;
    

    if (a == 0) {
        if (b == 0) {
            cout << "Rownanie ma nieskonczenie wiele rozwiazan" << endl;
        } else {
            cout << "brak miejsc zerowych" << endl;
        }
    } else {
        double x = -b / a;
        cout << "Miejsce zerowe funkcji: x = " << x << endl;
    }
    
 
    cout << "Nacisnij Enter, aby zakonczyc program.";
    cin.ignore();
    cin.get();
    
    return 0;
}
