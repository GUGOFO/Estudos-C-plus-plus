#include <iostream>

int main(){

    int x = 5;
    int y = x + 1;

    double pi = 3.1415;

    char letraB = 'B';

    bool ehEstudante = true;

    std::string nome = "GUSTAVO GOMES FORNACIARI";

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << pi << "\n";
    std::cout << letraB << "\n";
    std::cout << ehEstudante << "\n";
    nome.append("cu");
    std::cout << nome << "\n";


    return 0;
}