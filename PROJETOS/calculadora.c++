#include <iostream>
#include <cmath>

int main(){

    char operação;
    double primeiroNum, segundoNum, resultado;

    std::cout << "Escolha uma operacao ( + - / * % ): ";
    std::cin >> operação;

    std::cout << "Escolha o primeiro numero: ";
    std::cin >> primeiroNum;

    std::cout << "Escolha o segundo numero: ";
    std::cin >> segundoNum;

    switch (operação)
    {
    case '+':
        resultado = primeiroNum + segundoNum;
        break;
    case '-':
        resultado = primeiroNum - segundoNum;
        break;
    case '/':
        resultado = primeiroNum / segundoNum;
        break;
    case '*':
        resultado = primeiroNum * segundoNum;
        break;
    case '%':
        resultado = (int) round(primeiroNum) % (int) round(segundoNum);
        break;
    
    default:
        std::cout << "Voce n colocou uma operação possivel, tente novamente\n";
        resultado = NAN;
        break;
    }

    std::cout << "O resultado eh: " << resultado;

    return 0;
}