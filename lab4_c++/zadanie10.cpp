#include <iostream>
#include <bitset>

using namespace std;

int main() {
    
    unsigned char reg = 0b10101010; 
    int regInt = 0b10101010; 
    char regChar = 0b10101010; 

   
    cout << "Początkowa wartość (unsigned char): " << bitset<8>(reg) << " (" << (int)reg << ")\n";
    cout << "Początkowa wartość (int): " << bitset<8>(regInt) << " (" << regInt << ")\n";
    cout << "Początkowa wartość (char): " << bitset<8>(regChar) << " (" << (int)regChar << ")\n\n";

   
    reg <<= 1;      
    regInt <<= 1;   
    regChar <<= 1; 

    cout << "Po przesunięciu w lewo (unsigned char): " << bitset<8>(reg) << " (" << (int)reg << ")\n";
    cout << "Po przesunięciu w lewo (int): " << bitset<8>(regInt) << " (" << regInt << ")\n";
    cout << "Po przesunięciu w lewo (char): " << bitset<8>(regChar) << " (" << (int)regChar << ")\n\n";

   
    reg >>= 1;       
    regInt >>= 1;    
    regChar >>= 1;   

    cout << "Po przesunięciu w prawo (unsigned char): " << bitset<8>(reg) << " (" << (int)reg << ")\n";
    cout << "Po przesunięciu w prawo (int): " << bitset<8>(regInt) << " (" << regInt << ")\n";
    cout << "Po przesunięciu w prawo (char): " << bitset<8>(regChar) << " (" << (int)regChar << ")\n\n";

    
    reg = 0b00000001;    
    regInt = 0b00000001; 
    regChar = 0b00000001;


    cout << "Przesuwanie w lewo z 1 do 255 (unsigned char):\n";
    for (int i = 0; i < 8; i++) {
        cout << bitset<8>(reg) << " (" << (int)reg << ")\n";
        reg <<= 1; 
    }

    cout << "\nPrzesuwanie w prawo z 255 do 0 (unsigned char):\n";
    reg = 0b11111111; 
    for (int i = 0; i < 8; i++) {
        cout << bitset<8>(reg) << " (" << (int)reg << ")\n";
        reg >>= 1; 
    }

    return 0;
}
