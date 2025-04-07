#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return (x + 2) * pow(x, 2) * (x + 4) - 2;
}


double f_prime(double x) {
    return 4 * pow(x, 3) + 18 * pow(x, 2) + 16 * x;
}

int main() {
    double x1 = (-9 + sqrt(17)) / 4; 
    double x2 = (-9 - sqrt(17)) / 4;  
    double x0 = 0; 

    cout << "Ekstrema funkcji (x+2)(x^2)(x+4)-2 w podanym zakresie: " << endl;

    cout << "x1 = " << x1 << ", f(x1) = " << f(x1) << endl;
    cout << "x2 = " << x2 << ", f(x2) = " << f(x2) << endl;
    cout << "x0 = " << x0 << ", f(x0) = " << f(x0) << endl;

    return 0;
}
