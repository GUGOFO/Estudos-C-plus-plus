#include <iostream>

int main(){

    std::string inputUsuario;
    double tempOriginal = 0, resposta;
    char antigaUnidadeMedida, novaUnidadeMedida;


    std::cout << "Tempertatura que voce quer converter (EX: '10F'): ";
    std::cin >> inputUsuario;

    std::cout << "Para oque voce quer converter (F, C, K): ";
    std::cin >> novaUnidadeMedida;
    
    int tamanho = inputUsuario.size();
    antigaUnidadeMedida = inputUsuario[tamanho - 1];

    for(int i = 0; i < tamanho - 1; i++) tempOriginal = tempOriginal * 10 + (inputUsuario[i] - 48);

    if(antigaUnidadeMedida == novaUnidadeMedida){
        std::cout << "Resposta: " << tempOriginal << novaUnidadeMedida;
        return 0;
    }

    switch (antigaUnidadeMedida){
        case 'F':
            resposta = novaUnidadeMedida == 'C' ? (tempOriginal - 32) * 5.0/9.0 : (tempOriginal - 32) * 5.0/9.0 + 273.15;
            break;
        case 'C':
            resposta = novaUnidadeMedida == 'F' ? (tempOriginal * 9.0/5.0) + 32 : tempOriginal + 273.15;
            break;
        default:
            resposta = novaUnidadeMedida == 'F' ? (tempOriginal - 273.15) * 9.0/5.0 + 32: tempOriginal - 273.15;
            break;
    }

    std::cout << "Resposta: " << resposta << novaUnidadeMedida;

    return 0;
}