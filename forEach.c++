#include <iostream>

int main(){

    std::string nomes[] = {"Gustavo", "Ana", "Carol", "Japson", "Maria"};

    std::cout << "O grupo é composto por: ";

    for(std::string nome : nomes){
        std::cout << nome << ' ';
    }
  
    return 0;
}