#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    const int N = 10;
    vector<vector<int>> macierz(N, vector<int>(N));
    
   
    for (int i = 0; i < N; i++) {
        macierz[i][0] = i;           
        macierz[i][1] = i * i;        
        for (int j = 2; j < N; j++) {
            macierz[i][j] = (j == N - 1 - i) ? i : 178; 
        }
    }
    
 for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (macierz[i][j] == 178) printf("%3c", macierz[i][j]);
            else printf("%3d", macierz[i][j]);
        }
        cout << endl;
    }
    
    return 0;
}