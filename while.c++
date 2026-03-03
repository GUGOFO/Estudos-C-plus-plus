#include <iostream>

int main(){

    //PFV SO ENVIE NUMERO PRA N BUGAR AKSAKSKAKSAK
    int numero;

    std::cout << "Envie o numero 3: ";
    std::cin >> numero;
    
    while (numero != 3){
        std::cout << "Envie o numero 3 CRL: ";
        std::cin >> numero;
    }
    
    do{
        std::cout << "Envie o numero 1: ";
        std::cin >> numero;
    }while (numero != 1);
    
    return 0;
}