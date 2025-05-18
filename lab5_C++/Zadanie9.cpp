#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n;
    cout << "Podaj N: ";
    cin >> n;
    
    vector<int> wektor(n);
    for (int i = 0; i < n; i++) {
        wektor[i] = rand() % 100; 
    }
    
    cout << "Wylosowane liczby: ";
    for (int x : wektor) {
        cout << x << " ";
    }
    cout << endl;
    
    int czestosc[100] = {0};
    for (int x : wektor) {
        czestosc[x]++;
    }
    
    cout << "Powtarzające się wartości: ";
    bool znaleziono = false;
    for (int i = 0; i < 100; i++) {
        if (czestosc[i] > 1) {
            cout << i << " ";
            znaleziono = true;
        }
    }
    if (!znaleziono) cout << "Brak";
    cout << endl;
    
    return 0;
}