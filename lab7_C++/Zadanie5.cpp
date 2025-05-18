#include <iostream>

using namespace std;

int swap(int& a, int& b) {
    if (a == b) return 0;
    int temp = a;
    a = b;
    b = temp;
    return (a > b) ? 1 : -1;
}

int main() {
    int x = 10;
    int y = 20;

    int wynik = swap(x, y);

    cout << "Po zamianie: x = " << x << ", y = " << y << endl;
    cout << "Wynik funkcji: " << wynik << endl;

    return 0;
}
