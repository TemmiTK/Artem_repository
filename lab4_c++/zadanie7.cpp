#include <iostream>
using namespace std;

void displayBinary(int value) {
    for (int i = 7; i >= 0; --i) {
        cout << ((value >> i) & 1);
    }
}

void displayResult(const string& description, int value) {
    cout << description << "\n";
    cout << "Decimal value: " << value << "\n";
    cout << "Binary value: ";
    displayBinary(value);
    cout << "\n\n";
}

int main() {
    char charVal = 126;
    cout << "Operations on signed char:\n";
    charVal = 126;
    displayResult("Shift 1 bit to the right (char)", charVal >> 1);

    charVal = 126;
    displayResult("Shift 1 bit to the left (char)", charVal << 1);

    charVal = 126;
    displayResult("Shift 3 bits to the left char", charVal << 3  );
}
