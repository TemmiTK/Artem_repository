#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // 1. Utworzenie zmiennej 8-bitowej o wartości 00001011
    unsigned char value = 0b00001011;
    cout << "Początkowa wartość: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 2. Zresetowanie bitu LSB
    value = value & 0b11111110; // Ustawienie LSB na 0
    cout << "Po resecie LSB: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 3. Ustawienie bitu MSB 
    value = value | 0b10000000; // Ustawienie MSB na 1
    cout << "Po ustawieniu MSB: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 4. Ustawienie bitu nr 2
    value = value | 0b00000100; // Ustawienie bitu nr 2 na 1
    cout << "Po ustawieniu bitu nr 2: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 5. Sprawdzanie, czy czwarty bit jest ustawiony
    bool is4thBitSet = (value & 0b00001000) != 0;
    cout << "Czwarty bit " << (is4thBitSet ? "jest ustawiony" : "nie jest ustawiony") << "\n";

    // 6. Sprawdzanie, czy bity 5 i 6 są ustawione
    bool are5thAnd6thBitsSet = (value & 0b00110000) == 0b00110000;
    cout << "Bity 5 i 6 " << (are5thAnd6thBitsSet ? "są ustawione" : "nie są ustawione") << "\n";

    // 7. Inwersja bitu nr 3 niezależnie od jego stanu
    value = value ^ 0b00001000; // Inwersja bitu nr 3
    cout << "Po inwersji bitu nr 3: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 8. Ponowna inwersja bitu nr 3
    value = value ^ 0b00001000; // Ponowna inwersja bitu nr 3
    cout << "Po ponownej inwersji bitu nr 3: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    // 9. Przesunięcie liczby o 2 bity w lewo
    value = value << 2;
    cout << "Po przesunięciu o 2 bity w lewo: " << bitset<8>(value) << " (" << static_cast<int>(value) << ")\n";

    return 0;
}
