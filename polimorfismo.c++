#include <iostream>

void falarOi();
void falarOi(std::string nome);
void falarOi(std::string nome, int idade);

int main(){

    falarOi();
    falarOi("Gustavo");
    falarOi("Gustavo", 19);

    return 0;
}

void falarOi(){
    std::cout << "Oiiiiiii\n";
}

void falarOi(std::string nome){
    std::cout << "oiiiii " << nome << "\n";
}

void falarOi(std::string nome, int idade){
    std::cout << "oiiiii " << nome << " que tem " << idade << " anos de idade\n";
}
