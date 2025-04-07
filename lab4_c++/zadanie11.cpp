#include <iostream>
#include <bitset>

using namespace std;

void decToBin(int num) {
 
    bitset<8> binResult;  
    
    for (int i = 0; i < 8; i++) {
    
        binResult[i] = num & 1; 
        num >>= 1; 
       }
    
    cout << "Wartość binarna: " << binResult << endl;
}

int main() {
    int decNumber;
    
    cout << "Podaj liczbę dziesiętną: ";
    cin >> decNumber;
    
   
    decToBin(decNumber);

    return 0;
}
