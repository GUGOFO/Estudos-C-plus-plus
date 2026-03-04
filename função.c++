#include <iostream>

void parabensPraVoce(){
    std::cout << "Parabeeens pra vc\n";
    std::cout << "Parabeeens pra vc\n";
    std::cout << "Parabeeens pra vc\n";
    std::cout << "\n";
}

double divizãoPorDois(double numero){
    return numero/2;
}

int main(){

    parabensPraVoce();

    double num = 1.0;
    double numDividido = divizãoPorDois(num);
    std::cout << numDividido;

    return 0;
}

