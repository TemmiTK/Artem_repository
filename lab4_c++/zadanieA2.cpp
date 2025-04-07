#include <iostream>
using namespace std;

int main() {
    double a, b, x, y;

    
    cout << "Podaj współczynnik a: ";
    cin >> a;
    cout << "Podaj wyraz wolny b: ";
    cin >> b;
    cout << "Podaj wartość x: ";
    cin >> x;

   
    y = a * x + b;

 
    cout << "Wynik równania y = ax + b to: " << y << endl;

    return 0;
}
