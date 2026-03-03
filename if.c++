#include <iostream>

int main(){

    int idade = 19;

    if(idade < 18) std::cout << "CRIANCA!!!";
    else  std::cout << "VELHOOO";

    std::cout << "\n\n";

    idade < 18 ? std::cout << "CRIANCA!!!" : std::cout << "VELHOOO";

    return 0;
}