#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, y;


    cout << "Podaj współczynnik a: ";
    cin >> a;
    cout << "Podaj współczynnik b: ";
    cin >> b;
    cout << "Podaj współczynnik c: ";
    cin >> c;
    cout << "Podaj wartość x: ";
    cin >> x;

    
    y = a * x * x + b * x + c;

    
    cout << "Wynik równania kwadratowego y = ax^2 + bx + c to: " << y << endl;

    return 0;
}
