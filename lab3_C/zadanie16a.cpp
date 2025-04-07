#include <iostream>

int main() {
    int matchsticks = 11; 
    int player = 1;
    int taken;
    while (matchsticks > 0) {
        std::cout << "\nZostało " << matchsticks << " zapałek." << std::endl;

     
        std::cout << "Gracz " << player << ", ile zapałek chcesz zabrać (1-3)? ";
        std::cin >> taken;

      
        switch (taken) {
            case 1:
            case 2:
            case 3:
                if (taken <= matchsticks) {
                    matchsticks -= taken;
                } else {
                    std::cout << "Nie masz tylu zapałek!" << std::endl;
                    continue; 
                break;
            default:
                std::cout << "Nieprawidłowa liczba! Wybierz liczbę od 1 do 3." << std::endl;
                continue;
        }

    
        player = (player == 1) ? 2 : 1;
    }

    std::cout << "Gratulacje! Gracz " << (player == 1 ? 2 : 1) << " wygrał!" << std::endl;
    return 0;
}}

