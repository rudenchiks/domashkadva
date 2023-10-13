#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int SumOfPoints = 0;
int Xi, Yi;

int Sector(double interval) {
    double score = 5 - interval;
    if (score <= 0) score = 0;
    return static_cast<int>(score);
}

void Rezult(int points) {
    std::cout << "Общая сумма баллов: " << points << std::endl;
    
    // побитовая операция И (&)
    if (((points >> 3) == 0) or ((points >> 1) == 0100)) {
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
    return 1;
}