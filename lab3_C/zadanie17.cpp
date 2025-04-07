#include <iostream>
using namespace std;

int main() {
    int N;  
    int low = 1, high; 
    int guess; 
    string response; 

  
    cout << "Podaj górną granicę zakresu (N): ";
    cin >> N;

    high = N;

    cout << "Pomyśl o liczbie z przedziału 1.." << N << " i gotowe!" << endl;


    while (low <= high) {
      
        guess = (low + high) / 2;
        cout << "Czy to liczba " << guess << "? (odpowiedz 'za duzo', 'za malo', lub 'tak'): ";
        cin >> response;

        if (response == "za duzo") {
            high = guess - 1; 
        } else if (response == "za malo") {
            low = guess + 1;  
        } else if (response == "tak") {
            cout << "Komputer zgadł Twoją liczbę! To " << guess << "." << endl;
            break;  
        } else {
            cout << "Nie rozumiem odpowiedzi. Proszę odpowiedzieć 'za duzo', 'za malo' lub 'tak'." << endl;
        }
    }

    return 0;
}

