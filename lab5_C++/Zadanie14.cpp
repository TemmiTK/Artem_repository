#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    const int N = 10;
    vector<vector<int>> macierz(N, vector<int>(N));
    int suma = 0;
    

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            macierz[i][j] = (j == N - 1 - i) ? i : rand() % 100;
            if (j == N - 1 - i) suma += macierz[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", macierz[i][j]);
        }
        cout << endl;
    }
    
    cout << "Suma przekątnej: " << suma << endl;
    return 0;
}