#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int >> listaPar_t; //Jesus cristo não akkaska

//typedef std::string string_t;
//É melhor usar o "using"

using string_t = std::string; //Melhor e mais bonito

int main(){

    listaPar_t lista;
    string_t nome = "Gustavo Gomes Fornaciari";

    std::cout << nome;



    return 0;
}