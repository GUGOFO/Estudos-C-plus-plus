#include <iostream>

int main(){

    std::string comidas[100];

    fill(comidas, comidas + 50, "PIZZA");
    fill(comidas + 50, comidas + 100, "HAMBURGUERS");

    for(std::string comida: comidas){
        std::cout << comida << "\n";
    }

    return 0;
}