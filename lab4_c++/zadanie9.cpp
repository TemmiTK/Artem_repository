#include <iostream>
#include <bitset>
#include <cstdlib>  // Dla funkcji rand()
#include <ctime>    // Dla funkcji time()

using namespace std;

int main() {
    const int N = 100;
    unsigned char tab[N];  

    for (int i = 0; i < N; ++i) {
        tab[i] = rand() % 2;  
    }
    cout << "Początkowe wartości w tablicy:\n";
    for (int i = 0; i < N; ++i) {
        cout << "tab[" << i << "] = " << (int)tab[i] << "\n";
    }


    unsigned char result = tab[0];
    for (int i = 1; i < N; ++i) {
        result ^= tab[i];  
    }
    cout << "Wynik operacji XOR na wszystkich elementach tablicy: " 
         << (int)result << " (" << bitset<8>(result) << " w postaci binarnej)\n";

    return 0;
}
