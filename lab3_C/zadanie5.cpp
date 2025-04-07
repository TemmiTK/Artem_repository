#include <iostream>
#include <iomanip> 
#include <cstdio>   

using namespace std;

int main() {
    const int n = 100000000; 

   
    double sumUp = 0.0;
    for (int i = 1; i <= n; i++) {
        sumUp += 1.0 / (i * i);
    }

  
    double sumDown = 0.0;
    for (int i = n; i >= 1; i--) {
        sumDown += 1.0 / (i * i);
    }

 
    cout << fixed << setprecision(15); 
    cout << "Suma od 1 do 100000000: " << sumUp << endl;
    cout << "Suma od 100000000 do 1: " << sumDown << endl;


    printf("Suma od 1 do 100000000: %.15f\n", sumUp);
    printf("Suma od 100000000 do 1: %.15f\n", sumDown);

    return 0;
}
