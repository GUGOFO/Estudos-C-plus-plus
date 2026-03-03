#include <iostream>

int main(){
    
    std::cout << (char) 100 << '\n'; //Retorna o ASCII

    //Divizão de ints são ints, ent teriamos que transformar uma em double

    int dividendo = 8;
    int divizor = 10;

    double resultado = dividendo / (double) divizor * 100; //Esse 100 é pra ficar em %

    std::cout << resultado << '%';

    return 0;
}