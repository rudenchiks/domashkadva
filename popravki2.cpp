#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int SumOfPoints = 0;
int Xi, Yi;

int Sector(double interval) {
    if (interval >= 0 && interval < 1) {
        return 5;
    } else if (interval >= 1 && interval < 2) {
        return 4;
    } else if (interval >= 2 && interval < 3) {
        return 3;
    } else if (interval >= 3 && interval < 4) {
        return 2;
    } else if (interval >= 4 && interval < 5) {
        return 1;
    } else {
        return 0;
    }
}

void Rezult(int points) {
    std::cout << "Общая сумма баллов: " << points << std::endl;
    if (((points >> 3) == 0) || ((points >> 1) == 0b0100)) {
        std::cout << "Лузер" << std::endl;
    } else {
        std::cout << "Умничка" << std::endl;
    }
}

int main() {
    srand(time(0));
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Введите координаты (x, y)" << std::endl;
        std::cout << "x: ";
        std::cin >> Xi;
        std::cout << "y: ";
        std::cin >> Yi;
        
        Xi = Xi + (rand() % 11) - 5;
        Yi = Yi + (rand() % 11) - 5;
        
        double interval = sqrt(Xi * Xi + Yi * Yi);
        std::cout << interval << std::endl;
        SumOfPoints = SumOfPoints + Sector(interval);
    }
    Rezult(SumOfPoints);
    return 0;
}