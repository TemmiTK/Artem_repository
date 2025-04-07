#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Program oblicza miejsca zerowe równania kwadratowego ax^2 + bx + c = 0" << endl;

    cout << "Podaj współczynnik a: ";
    cin >> a;
    cout << "Podaj współczynnik b: ";
    cin >> b;
    cout << "Podaj współczynnik c: ";
    cin >> c;
    if (a == 0) {
        if (b != 0) {
            double x = -c / b;
            cout << "Równanie jest liniowe. Rozwiązanie: x = " << x << endl;
        } else if (c == 0) {
            cout << "Równanie tożsamościowe (nieskończenie wiele rozwiązań)." << endl;
        } else {
            cout << "Równanie sprzeczne (brak rozwiązań)." << endl;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "dwa rozwiązania: x1 = " << x1 << " oraz x2 = " << x2 << endl;
        } else if (delta == 0) {
            
            double x = -b / (2 * a);
            cout << "jedno rozwiązanie: x = " << x << endl;
        } else {
            cout << "Równanie nie ma rozwiązań" << endl;
        }
    }
    cout << "Naciśnij Enter, aby zakończyć program." << endl;
    cin.ignore();
    cin.get();
    
    return 0;
}
