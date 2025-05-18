#include <iostream>

using namespace std;

struct IP {
    unsigned char oktet[4];
};

IP wyznaczAdresSieci(IP adres, IP maska) {
    IP siec;
    for (int i = 0; i < 4; i++) {
        siec.oktet[i] = adres.oktet[i] & maska.oktet[i];
    }
    return siec;
}

void wypiszIP(IP ip) {
    for (int i = 0; i < 4; i++) {
        cout << (int)ip.oktet[i];
        if (i < 3) cout << ".";
    }
    cout << endl;
}

int main() {
    IP adres = {192, 168, 1, 10};
    IP maska = {255, 255, 255, 0};

    cout << "Adres IP: ";
    wypiszIP(adres);

    cout << "Maska:    ";
    wypiszIP(maska);

    IP siec = wyznaczAdresSieci(adres, maska);

    cout << "Adres sieci: ";
    wypiszIP(siec);

    return 0;
}
