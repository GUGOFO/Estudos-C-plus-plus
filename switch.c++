#include <iostream>

int main(){

    //DEIXANDO CLARO QUE SEI Q UM ARRAY DE MESES SERIA MUITO MAIS EFICIENTE
    //Porem estou aprendendo e quero usar switch <3

    int mes;

    std::cout << "Me diga o numero q eu te falo o mes: ";
    std::cin >> mes;

    switch (mes)
    {
    case 1:
        std::cout << "JANEIRO!";
        break;
    case 2:
        std::cout << "FEVEREIRO!";
        break;
    case 3:
        std::cout << "MARCO!";
        break;
    case 4:
        std::cout << "ABRIL!";
        break;
    case 5:
        std::cout << "MAIO!";
        break;
    case 6:
        std::cout << "JUNHO!";
        break;
    case 7:
        std::cout << "JULHO!";
        break;
    case 8:
        std::cout << "AGOSTO!";
        break;
    case 9:
        std::cout << "SETEMBRO!";
        break;
    case 10:
        std::cout << "OUTUBRO!";
        break;
    case 11:
        std::cout << "NOVEMBRO!";
        break;
    case 12:
        std::cout << "DEZEMBRO!";
        break;
    default:
        std::cout << "OOOO BURRAO, ISSO N EH MES";
        break;
    }

    return 0;
}