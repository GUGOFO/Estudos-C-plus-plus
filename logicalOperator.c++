#include <iostream>

int main(){
    
    bool estaudando = true;
    bool ehLindo = false;

    std::cout << (estaudando || ehLindo ? "pelo menos algo" : "NADA JESUS") << '\n';
    
    std::cout << (estaudando && ehLindo ? "JESUS??" : "NADA JESUS");
    return 0;
}