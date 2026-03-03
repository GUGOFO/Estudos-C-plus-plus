#include <iostream>

int main(){

    std::string nome;
    int idade;

    std::cout << "Qual seu nome completo: ";
    //std::cin >> nome;  NÃO FUNCIONARIA POR CONTA DOS ESPAÇOS
    std::getline(std::cin >>std::ws, nome);

    std::cout << "Qual sua idade: ";
    std::cin >> idade ;   //So funciona com strings sem espaçõs

    std::cout << "Seu nome eh : " << nome;
    std::cout << "\nVoce tem : " << idade;

    return 0;
}
