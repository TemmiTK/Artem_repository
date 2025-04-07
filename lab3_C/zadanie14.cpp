#include <iostream>

using namespace std;

int main() {
    int i = 100;
    for(;;) {
        if (i < 1) {
            break;
        }
        if (i % 3 == 0 || i % 4 == 0) {
            i--;
            continue; 
        }
        cout << i << endl;
        i--;
    }
    return 0;
}

