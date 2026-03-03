#include <iostream>
#include <cmath>

int main(){

    double ca, co;

    std::cout << "Escolha um Cateto Oposto (C.O): ";
    std::cin >> co;
    
    std::cout << "Escolha um Cateto Adjasente (C.A): ";
    std::cin >> ca;

    std::cout << "\nHipotenuza: " << sqrt(ca*ca + co*co);

    return 0;
}